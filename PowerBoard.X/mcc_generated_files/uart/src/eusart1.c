/**
 * EUSART1 Generated Driver API Header File
 * 
 * @file eusart1.c
 * 
 * @ingroup eusart1
 * 
 * @brief This is the generated driver implementation file for the EUSART1 driver using CCL
 *
 * @version EUSART1 Driver Version 3.0.0
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
#include "../eusart1.h"

/**
  Section: Macro Declarations
*/

/**
  Section: Driver Interface
 */

const uart_drv_interface_t UART1 = {
    .Initialize = &EUSART1_Initialize,
    .Deinitialize = &EUSART1_Deinitialize,
    .Read = &EUSART1_Read,
    .Write = &EUSART1_Write,
    .IsRxReady = &EUSART1_IsRxReady,
    .IsTxReady = &EUSART1_IsTxReady,
    .IsTxDone = &EUSART1_IsTxDone,
    .TransmitEnable = &EUSART1_TransmitEnable,
    .TransmitDisable = &EUSART1_TransmitDisable,
    .AutoBaudSet = &EUSART1_AutoBaudSet,
    .AutoBaudQuery = &EUSART1_AutoBaudQuery,
    .BRGCountSet = NULL,
    .BRGCountGet = NULL,
    .BaudRateSet = NULL,
    .BaudRateGet = NULL,
    .AutoBaudEventEnableGet = NULL,
    .ErrorGet = &EUSART1_ErrorGet,
    .TxCompleteCallbackRegister = NULL,
    .RxCompleteCallbackRegister = NULL,
    .TxCollisionCallbackRegister = NULL,
    .FramingErrorCallbackRegister = &EUSART1_FramingErrorCallbackRegister,
    .OverrunErrorCallbackRegister = &EUSART1_OverrunErrorCallbackRegister,
    .ParityErrorCallbackRegister = NULL,
    .EventCallbackRegister = NULL,
};

/**
  Section: EUSART1 variables
*/
volatile eusart1_status_t eusart1RxLastError;

/**
  Section: EUSART1 APIs
*/

void (*EUSART1_FramingErrorHandler)(void);
void (*EUSART1_OverrunErrorHandler)(void);

static void EUSART1_DefaultFramingErrorCallback(void);
static void EUSART1_DefaultOverrunErrorCallback(void);


/**
  Section: EUSART1  APIs
*/

void EUSART1_Initialize(void)
{
    // Set the EUSART1 module to the options selected in the user interface.

    //ABDEN disabled; WUE disabled; BRG16 16bit_generator; ABDOVF no_overflow; CKTXP async_noninverted_sync_fallingedge; RXDTP not_inverted; 
    BAUDCON1 = 0x48; 
    //ADDEN disabled; CREN enabled; SREN disabled; RX9 8-bit; SPEN enabled; 
    RCSTA1 = 0x90; 
    //TX9D 0x0; BRGH hi_speed; SENDB sync_break_complete; SYNC asynchronous; TXEN enabled; TX9 8-bit; CSRC client_mode; 
    TXSTA1 = 0x26; 
    //SPBRGL 207; 
    SPBRG1 = 0xCF; 
    //SPBRGH 0; 
    SPBRGH1 = 0x0; 

    EUSART1_FramingErrorCallbackRegister(EUSART1_DefaultFramingErrorCallback);
    EUSART1_OverrunErrorCallbackRegister(EUSART1_DefaultOverrunErrorCallback);
    eusart1RxLastError.status = 0;  

}

void EUSART1_Deinitialize(void)
{
    BAUDCON1 = 0x00;
    RCSTA1 = 0x00;
    TXSTA1 = 0x00;
    SPBRG1 = 0x00;
    SPBRGH1 = 0x00;
}

inline void EUSART1_Enable(void)
{
    RCSTA1bits.SPEN = 1;

}

inline void EUSART1_Disable(void)
{
    RCSTA1bits.SPEN = 0;
}


inline void EUSART1_TransmitEnable(void)
{
    TXSTA1bits.TXEN = 1;
}

inline void EUSART1_TransmitDisable(void)
{
    TXSTA1bits.TXEN = 0;
}

inline void EUSART1_ReceiveEnable(void)
{
    RCSTA1bits.CREN = 1;
}

inline void EUSART1_ReceiveDisable(void)
{
    RCSTA1bits.CREN = 0;
}

inline void EUSART1_SendBreakControlEnable(void)
{
    TXSTA1bits.SENDB = 1;
}

inline void EUSART1_SendBreakControlDisable(void)
{
    TXSTA1bits.SENDB = 0;
}

inline void EUSART1_AutoBaudSet(bool enable)
{
    if(enable)
    {
        BAUDCON1bits.ABDEN = 1;
    }
    else
    {
       BAUDCON1bits.ABDEN = 0; 
    }
}

inline bool EUSART1_AutoBaudQuery(void)
{
return (bool)(!BAUDCON1bits.ABDEN);
}

inline bool EUSART1_IsAutoBaudDetectOverflow(void)
{
    return (bool)BAUDCON1bits.ABDOVF; 
}

inline void EUSART1_AutoBaudDetectOverflowReset(void)
{
    BAUDCON1bits.ABDOVF = 0; 
}

bool EUSART1_IsRxReady(void)
{
    return (bool)(PIR1bits.RC1IF);
}

bool EUSART1_IsTxReady(void)
{
    return (bool)(PIR1bits.TX1IF && TXSTA1bits.TXEN);
}

bool EUSART1_IsTxDone(void)
{
    return TXSTA1bits.TRMT;
}

size_t EUSART1_ErrorGet(void)
{
    return eusart1RxLastError.status;
}

uint8_t EUSART1_Read(void)
{
    eusart1RxLastError.status = 0;
    if(RCSTA1bits.OERR)
    {
        eusart1RxLastError.oerr = 1;
        if(NULL != EUSART1_OverrunErrorHandler)
        {
            EUSART1_OverrunErrorHandler();
        }   
    }
    if(RCSTA1bits.FERR)
    {
        eusart1RxLastError.ferr = 1;
        if(NULL != EUSART1_FramingErrorHandler)
        {
            EUSART1_FramingErrorHandler();
        }   
    }
    return RCREG1;
}

void EUSART1_Write(uint8_t txData)
{
    TXREG1 = txData;
}

void EUSART1_Send(uint8_t txData)
{
    // Wait for the transmitter to be ready
    while(!EUSART1_IsTxReady());
    
    // Transmit the data
    EUSART1_Write(txData);
}

static void EUSART1_DefaultFramingErrorCallback(void)
{
    
}

static void EUSART1_DefaultOverrunErrorCallback(void)
{
    //Continuous Receive must be cleared to clear Overrun Error else Rx will not receive upcoming bytes
    RCSTA1bits.CREN = 0;
    RCSTA1bits.CREN = 1;
}

void EUSART1_FramingErrorCallbackRegister(void (* callbackHandler)(void))
{
    if(NULL != callbackHandler)
    {
        EUSART1_FramingErrorHandler = callbackHandler;
    }
}

void EUSART1_OverrunErrorCallbackRegister(void (* callbackHandler)(void))
{
    if(NULL != callbackHandler)
    {
        EUSART1_OverrunErrorHandler = callbackHandler;
    }    
}

