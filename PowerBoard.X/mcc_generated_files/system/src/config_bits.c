/**
 * Configuration Bits Generated Driver Source File
 * 
 * @file config_bits.c
 * 
 * @ingroup config_bitsdriver
 * 
 * @brief This file contains the API Implementation for the Device Configuration Bits driver.
 *
 * @version Driver Version 1.0.1
 *
 * @version Package Version 1.0.3
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

// Configuration bits: selected in the GUI

//CONFIG1L
#pragma config PLLSEL = PLL3X    // PLL Selection->3x clock multiplier
#pragma config CFGPLLEN = OFF    // PLL Enable Configuration bit->PLL Disabled (firmware controlled)
#pragma config CPUDIV = NOCLKDIV    // CPU System Clock Postscaler->CPU uses system clock (no divide)
#pragma config LS48MHZ = SYS24X4    // Low Speed USB mode with 48 MHz system clock->System clock at 24 MHz, USB clock divider is set to 4

//CONFIG1H
#pragma config FOSC = INTOSCIO    // Oscillator Selection bits->Internal oscillator
#pragma config PCLKEN = ON    // Primary Clock Enable bit->Primary oscillator enabled
#pragma config FCMEN = OFF    // Fail-Safe Clock Monitor Enable bit->Fail-Safe Clock Monitor disabled
#pragma config IESO = OFF    // Internal/External Oscillator Switchover bit->Oscillator Switchover mode disabled

//CONFIG2L
#pragma config nPWRTEN = OFF    // Power-up Timer Enable->Power up timer disabled
#pragma config BOREN = SBORDIS    // Brown-out Reset Enable bits->BOR enabled in hardware (SBOREN is ignored)
#pragma config BORV = 190    // Brown Out Reset Voltage bits->BOR set to 1.9V nominal
#pragma config nLPBOR = ON    // Low-Power Brown-out Reset->Low-Power Brown-out Reset enabled

//CONFIG2H
#pragma config WDTEN = NOSLP    // Watchdog Timer Enable bits->WDT enabled in hardware, disabled in Sleep mode (SWDTEN ignored)
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits->1:32768

//CONFIG3H
#pragma config MCLRE = ON    // MCLR Pin Enable bit->MCLR pin enabled; RE3 input disabled
#pragma config CCP2MX = RC1    // CCP2 MUX bit->CCP2 input/output is multiplexed with RC1
#pragma config PBADEN = OFF    // PORTB A/D Enable bit->PORTB<5:0> pins are configured as digital I/O on Reset
#pragma config T3CMX = RC0    // Timer3 Clock input mux bit->T3CKI function is on RC0
#pragma config SDOMX = RC7    // SDO Output MUX bit->SDO function is on RC7

//CONFIG4L
#pragma config STVREN = ON    // Stack Full/Underflow Reset Enable bit->Stack full/underflow will cause Reset
#pragma config LVP = ON    // Single-Supply ICSP Enable bit->Single-Supply ICSP enabled if MCLRE is also 1
#pragma config ICPRT = ON    // Dedicated In-Circuit Debug/Programming Port Enable->ICPORT enabled
#pragma config XINST = OFF    // Extended Instruction Set Enable bit->Instruction set extension and Indexed Addressing mode disabled

//CONFIG5L
#pragma config CP0 = OFF    // Code Protection Block 0->Block 0 is not code-protected
#pragma config CP1 = OFF    // Code Protection Block 1->Block 1 is not code-protected
#pragma config CP2 = OFF    // Code Protection Block 2->Block 2 is not code-protected
#pragma config CP3 = OFF    // Code Protection Block 3->Block 3 is not code-protected

//CONFIG5H
#pragma config CPB = OFF    // Boot Block Code Protection bit->Boot block is not code-protected
#pragma config CPD = OFF    // Data EEPROM Code Protection bit->Data EEPROM is not code-protected

//CONFIG6L
#pragma config WRT0 = OFF    // Write Protection Block 0->Block 0 (0800-1FFFh) is not write-protected
#pragma config WRT1 = OFF    // Write Protection Block 1->Block 1 (2000-3FFFh) is not write-protected
#pragma config WRT2 = OFF    // Write Protection Block 2->Block 2 (04000-5FFFh) is not write-protected
#pragma config WRT3 = OFF    // Write Protection Block 3->Block 3 (06000-7FFFh) is not write-protected

//CONFIG6H
#pragma config WRTC = OFF    // Configuration Register Write Protection bit->Configuration registers (300000-3000FFh) are not write-protected
#pragma config WRTB = OFF    // Boot Block Write Protection bit->Boot block (0000-7FFh) is not write-protected
#pragma config WRTD = OFF    // Data EEPROM Write Protection bit->Data EEPROM is not write-protected

//CONFIG7L
#pragma config EBTR0 = OFF    // Table Read Protection Block 0->Block 0 is not protected from table reads executed in other blocks
#pragma config EBTR1 = OFF    // Table Read Protection Block 1->Block 1 is not protected from table reads executed in other blocks
#pragma config EBTR2 = OFF    // Table Read Protection Block 2->Block 2 is not protected from table reads executed in other blocks
#pragma config EBTR3 = OFF    // Table Read Protection Block 3->Block 3 is not protected from table reads executed in other blocks

//CONFIG7H
#pragma config EBTRB = OFF    // Boot Block Table Read Protection bit->OFF

/**
 End of File
*/