/**
 * TMR2 Generated Driver API Header File
 *
 * @file tmr2.h
 *  
 * @defgroup tmr2 TMR2
 *
 * @brief This file contains the API Prototypes and other data types for the TMR2 driver.
 *
 * @version TMR2 Driver Version 1.0.0
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

#ifndef TMR2_H
#define TMR2_H

#include <stdint.h>
#include <stdbool.h>

/**
  Section: Macro Declarations
*/

/**
  Section: TMR2 APIs
*/

/**
 * @ingroup tmr2
 * @brief Initializes the TMR2 module. This routine must be called before any other timer routines.
 * @param None.
 * @return None.
 */
 void TMR2_Initialize(void);

/**
 * @ingroup tmr2
 * @brief Starts TMR2.
 * @pre The TMR2 should be initialized with TMR2_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR2_Start(void);

/**
 * @ingroup tmr2
 * @brief Stops TMR2.
 * @pre The TMR2 should be initialized with TMR2_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR2_Stop(void);

/**
 * @ingroup tmr2
 * @brief Reads the 8-bit from the TMR2 register.
 * @pre The TMR2 should be initialized with TMR2_Initialize() before calling this API.
 * @param None.
 * @return 8-bit data from the TMR2 register.
 */
uint8_t TMR2_Read(void);

/**
 * @ingroup tmr2
 * @brief Writes the 8-bit value to the TMR2 register.
 * @pre The TMR2 should be initialized with TMR2_Initialize() before calling this API.
 * @param timerVal - 8-bit value written to the TMR2 register.
 * @return None.
 */
void TMR2_Write(uint8_t timerVal);

/**
 * @ingroup tmr2
 * @brief Loads the 8-bit value to the PR2 register.
 * @pre The TMR2 should be initialized with TMR2_Initialize() before calling this API.
 * @param periodVal - 8-bit value written to the PR2 register.
 * @return None.
 */
void TMR2_PeriodCountSet(size_t periodVal);

/**
 * @ingroup tmr2
 * @brief Setter function for the TMR2 overflow callback.
 * @param CallbackHandler - Pointer to the custom callback.
 * @return None.
 */
void TMR2_OverflowCallbackRegister(void (* InterruptHandler)(void));

/**
 * @ingroup tmr2
 * @brief Performs the tasks to be executed on timer overflow event.
 * @param None.
 * @return None.
 */
void TMR2_Tasks(void);

#endif // TMR2_H
/**
 End of File
*/