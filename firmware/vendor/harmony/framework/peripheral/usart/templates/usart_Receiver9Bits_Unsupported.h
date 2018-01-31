/*******************************************************************************
  USART Peripheral Library Template Implementation

  File Name:
    usart_Receiver9Bits_Unsupported.h

  Summary:
    USART PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : Receiver9Bits
    and its Variant : Unsupported
    For following APIs :
        PLIB_USART_ExistsReceiver9Bits
        PLIB_USART_Receiver9BitsReceive

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _USART_RECEIVER9BITS_UNSUPPORTED_H
#define _USART_RECEIVER9BITS_UNSUPPORTED_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    None.

  MASKs: 
    None.

  POSs: 
    None.

  LENs: 
    None.

*/


//******************************************************************************
/* Function :  USART_ExistsReceiver9Bits_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USART_ExistsReceiver9Bits

  Description:
    This template implements the Unsupported variant of the PLIB_USART_ExistsReceiver9Bits function.
*/

PLIB_TEMPLATE bool USART_ExistsReceiver9Bits_Unsupported( USART_MODULE_ID index )
{
    return false;
}


//******************************************************************************
/* Function :  USART_Receiver9BitsReceive_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USART_Receiver9BitsReceive 

  Description:
    This template implements the Unsupported variant of the PLIB_USART_Receiver9BitsReceive function.
*/

PLIB_TEMPLATE int16_t USART_Receiver9BitsReceive_Unsupported( USART_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USART_Receiver9BitsReceive");

    return (int16_t) 0;
}


#endif /*_USART_RECEIVER9BITS_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

