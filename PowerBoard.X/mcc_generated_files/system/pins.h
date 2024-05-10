/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define LM35_in_TRIS                 TRISAbits.TRISA0
#define LM35_in_LAT                  LATAbits.LATA0
#define LM35_in_PORT                 PORTAbits.RA0
#define LM35_in_WPU                  WPUAbits.
#define LM35_in_OD                   ODCONAbits.
#define LM35_in_ANS                  ANSELAbits.ANSA0
#define LM35_in_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LM35_in_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LM35_in_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LM35_in_GetValue()           PORTAbits.RA0
#define LM35_in_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LM35_in_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LM35_in_SetPullup()          do { WPUAbits. = 1; } while(0)
#define LM35_in_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define LM35_in_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define LM35_in_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define LM35_in_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LM35_in_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RB0 aliases
#define SDA_TRIS                 TRISBbits.TRISB0
#define SDA_LAT                  LATBbits.LATB0
#define SDA_PORT                 PORTBbits.RB0
#define SDA_WPU                  WPUBbits.WPUB0
#define SDA_OD                   ODCONBbits.
#define SDA_ANS                  ANSELBbits.ANSB0
#define SDA_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SDA_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SDA_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SDA_GetValue()           PORTBbits.RB0
#define SDA_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SDA_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 aliases
#define SCL_TRIS                 TRISBbits.TRISB1
#define SCL_LAT                  LATBbits.LATB1
#define SCL_PORT                 PORTBbits.RB1
#define SCL_WPU                  WPUBbits.WPUB1
#define SCL_OD                   ODCONBbits.
#define SCL_ANS                  ANSELBbits.ANSB1
#define SCL_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SCL_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SCL_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SCL_GetValue()           PORTBbits.RB1
#define SCL_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SCL_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RC1 aliases
#define PWM_TRIS                 TRISCbits.TRISC1
#define PWM_LAT                  LATCbits.LATC1
#define PWM_PORT                 PORTCbits.RC1
#define PWM_WPU                  WPUCbits.
#define PWM_OD                   ODCONCbits.
#define PWM_ANS                  ANSELCbits.
#define PWM_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define PWM_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define PWM_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define PWM_GetValue()           PORTCbits.RC1
#define PWM_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define PWM_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define PWM_SetPullup()          do { WPUCbits. = 1; } while(0)
#define PWM_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define PWM_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define PWM_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define PWM_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define PWM_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC6 aliases
#define TX_TRIS                 TRISCbits.TRISC6
#define TX_LAT                  LATCbits.LATC6
#define TX_PORT                 PORTCbits.RC6
#define TX_WPU                  WPUCbits.
#define TX_OD                   ODCONCbits.
#define TX_ANS                  ANSELCbits.ANSC6
#define TX_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define TX_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define TX_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define TX_GetValue()           PORTCbits.RC6
#define TX_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define TX_SetPullup()          do { WPUCbits. = 1; } while(0)
#define TX_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define TX_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define TX_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define TX_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define TX_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 aliases
#define RX_TRIS                 TRISCbits.TRISC7
#define RX_LAT                  LATCbits.LATC7
#define RX_PORT                 PORTCbits.RC7
#define RX_WPU                  WPUCbits.
#define RX_OD                   ODCONCbits.
#define RX_ANS                  ANSELCbits.ANSC7
#define RX_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RX_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RX_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RX_GetValue()           PORTCbits.RC7
#define RX_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RX_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RX_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RX_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RX_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RX_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define RX_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set RD0 aliases
#define LED_1_TRIS                 TRISDbits.TRISD0
#define LED_1_LAT                  LATDbits.LATD0
#define LED_1_PORT                 PORTDbits.RD0
#define LED_1_WPU                  WPUDbits.
#define LED_1_OD                   ODCONDbits.
#define LED_1_ANS                  ANSELDbits.ANSD0
#define LED_1_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED_1_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED_1_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED_1_GetValue()           PORTDbits.RD0
#define LED_1_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LED_1_SetPullup()          do { WPUDbits. = 1; } while(0)
#define LED_1_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define LED_1_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define LED_1_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define LED_1_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define LED_1_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set RD1 aliases
#define LED_2_TRIS                 TRISDbits.TRISD1
#define LED_2_LAT                  LATDbits.LATD1
#define LED_2_PORT                 PORTDbits.RD1
#define LED_2_WPU                  WPUDbits.
#define LED_2_OD                   ODCONDbits.
#define LED_2_ANS                  ANSELDbits.ANSD1
#define LED_2_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_2_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_2_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_2_GetValue()           PORTDbits.RD1
#define LED_2_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUDbits. = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set RD2 aliases
#define LED_3_TRIS                 TRISDbits.TRISD2
#define LED_3_LAT                  LATDbits.LATD2
#define LED_3_PORT                 PORTDbits.RD2
#define LED_3_WPU                  WPUDbits.
#define LED_3_OD                   ODCONDbits.
#define LED_3_ANS                  ANSELDbits.ANSD2
#define LED_3_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED_3_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED_3_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED_3_GetValue()           PORTDbits.RD2
#define LED_3_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED_3_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LED_3_SetPullup()          do { WPUDbits. = 1; } while(0)
#define LED_3_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define LED_3_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define LED_3_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define LED_3_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define LED_3_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/