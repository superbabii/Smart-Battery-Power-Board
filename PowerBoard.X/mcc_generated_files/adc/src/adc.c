/**
 * ADC Generated Driver File
 * 
 * @file adc.c
 * 
 * @ingroup  adc
 * 
 * @brief This file contains the API implementations for the ADC module.
 *
 * @version ADC Driver Version 1.0.0
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "../adc.h"
#include "../../system/clock.h"

/**
  Section: Macro Declarations
*/

#define ACQ_US_DELAY 8


/**
  Section: ADC Module APIs
*/

void ADC_Initialize(void)
{
    // ADPREF VDD; ADNREF VSS; TRIGSEL CCP2; 
    ADCON1 = 0x0;

    // ADCS FOSC/2; ACQT 0; ADFM left; 
    ADCON2 = 0x0;

    // ADRESL 0x0; 
    ADRESL = 0x0;

    // ADRESH 0x0; 
    ADRESH = 0x0;


    // ADON enabled; GO_nDONE undefined; CHS AN0; 
    ADCON0 = 0x3;

    //Clear the ADC interrupt flag
    PIR1bits.ADIF = 0;
    
}
void ADC_SelectChannel(adc_channel_t channel)
{
    //Selects the A/D channel
    ADCON0bits.CHS = channel;    
}

void ADC_StartConversion(void)
{
    //Starts the conversion
    ADCON0bits.GO_nDONE = 1;
}

bool ADC_IsConversionDone(void)
{
    //Returns the conversion status
    return ((bool)(!ADCON0bits.GO_nDONE));
}

adc_result_t ADC_GetConversionResult(void)
{
    //Conversion finished, returns the result
    return ((adc_result_t)((ADRESH << 8) + ADRESL));
}

adc_result_t ADC_GetConversion(adc_channel_t channel)
{
    //Selects the A/D channel
    ADCON0bits.CHS = channel;
    //Turns on the ADC module
    ADCON0bits.ADON = 1;

    //Acquisition time delay
    __delay_us(ACQ_US_DELAY);

    //Starts the conversion
    ADCON0bits.GO_nDONE = 1;

    //Waits for the conversion to finish
    while (ADCON0bits.GO_nDONE)
    {
    }

    //Conversion finished, returns the result
    return ((adc_result_t)((ADRESH << 8) + ADRESL));
}

void ADC_TemperatureAcquisitionDelay(void)
{
    __delay_us(200);
}

