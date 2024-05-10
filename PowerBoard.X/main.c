#include "mcc_generated_files/system/system.h"

// Define target temperature for full fan speed (adjust based on your needs)
#define TARGET_TEMP_1 25
#define TARGET_TEMP_2 30
#define LM35_CHANNEL 0 // LM35 is connected to AN0 (RA0)
#define BATTERY_ADDRESS_WRITE 0x16
#define BATTERY_ADDRESS_READ 0x17
/*
    Main application
*/

// Function to send a string over UART
void UART_Send_String(const char* string) {
    // Loop through each character in the string
    while(*string != '\0') {
        // Send the current character
        EUSART1_Send(*string++);
    }
}

float LM35_GetTemperature(void)
{
    // Read ADC result from LM35 sensor
    adc_result_t adc_result = ADC_GetConversion(LM35_CHANNEL);

    // Convert ADC result to temperature in Celsius
    // LM35 outputs 10mV per degree Celsius
    // ADC result ranges from 0 to 1023 (10-bit ADC)
    float voltage = (float)adc_result * (5.0f / 1023.0f); // Convert ADC result to voltage (assuming Vref = 5V)
    float temperature = voltage * 100.0f; // Convert voltage to temperature in Celsius

    return temperature;
}

// Function to update PWM duty cycle based on temperature
uint16_t update_PWM_duty_cycle(float temperature) {
    // Scale temperature to PWM duty cycle
    // Adjust these values according to your specific requirements
    uint16_t duty_cycle = 0;
    if (temperature <= TARGET_TEMP_1) {
        duty_cycle = 10; // Low duty cycle
    } else if (temperature > TARGET_TEMP_1 && temperature <= TARGET_TEMP_2) {
        duty_cycle = 50; // Medium duty cycle
    } else {
        duty_cycle = 90; // High duty cycle
    }
    
    // Update PWM duty cycle
    CCP2_LoadDutyValue(duty_cycle);
    
    return duty_cycle;
}

// Function to send a command to the smart battery
void SendCommand(uint8_t command) {
    // Start I2C communication and send command to battery
    I2C1_Write(BATTERY_ADDRESS_WRITE, &command, sizeof(command));
}

// Function to read data from the smart battery
uint16_t ReadData(void) {
    uint16_t data;
    // Read data from battery
    I2C1_Read(BATTERY_ADDRESS_READ, (uint8_t*)&data, sizeof(data));
    return data;
}

int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        // Convert ADC reading to temperature
        float temperature = LM35_GetTemperature();

        // Update PWM duty cycle based on temperature
        uint16_t duty_cycle = update_PWM_duty_cycle(temperature);
        
        // Read battery voltage
        SendCommand(0x09); // Send command code to read voltage
        uint16_t batteryVoltage = ReadData(); // Read voltage data from battery

        UART_Send_String("Temperature: ");
        char temp_str[10];
        sprintf(temp_str, "%.1f%s", temperature, "\u00B0C");
        UART_Send_String(temp_str);
        UART_Send_String(", Fan duty cycle: "); // Use \r\n for new line
        char duty_cycle_str[4];
        sprintf(duty_cycle_str, "%d", duty_cycle); // Convert duty cycle to string (integer)
        UART_Send_String(duty_cycle_str);
        UART_Send_String("%, Battery voltage: ");
        char voltage_str[10];
        sprintf(voltage_str, "%dmV", batteryVoltage); // Convert voltage to string (integer)
        UART_Send_String(voltage_str);
        UART_Send_String("%\r\n");
        
        // Toggle LED 1
        LED_1_Toggle();
        
        // Toggle LED 2
        LED_2_Toggle();  
        
        // Toggle LED 3
        LED_3_Toggle();
        
        // Delay for some time before next temperature reading
        __delay_ms(1000);
    }    
}