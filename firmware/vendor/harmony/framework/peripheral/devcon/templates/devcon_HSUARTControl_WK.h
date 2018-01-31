/*******************************************************************************
  DEVCON Peripheral Library Template Implementation

  File Name:
    devcon_HSUARTControl_WK.h

  Summary:
    DEVCON PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : HSUARTControl
    and its Variant : WK
    For following APIs :
        PLIB_DEVCON_HSUARTEnable
        PLIB_DEVCON_HSUARTDisable
        PLIB_DEVCON_ExistsHSUARTControl

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

#ifndef _DEVCON_HSUARTCONTROL_WK_H
#define _DEVCON_HSUARTCONTROL_WK_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _DEVCON_HS_UART_ENABLE_VREG(index)

  MASKs: 
    _DEVCON_HS_UART_ENABLE_MASK(index)

  POSs: 
    _DEVCON_HS_UART_ENABLE_POS(index)

  LENs: 
    _DEVCON_HS_UART_ENABLE_LEN(index)

*/


//******************************************************************************
/* Function :  DEVCON_HSUARTEnable_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_HSUARTEnable 

  Description:
    This template implements the WK variant of the PLIB_DEVCON_HSUARTEnable function.
*/

PLIB_TEMPLATE void DEVCON_HSUARTEnable_WK( DEVCON_MODULE_ID index )
{
    _SFR_BIT_WRITE(_DEVCON_HS_UART_ENABLE_VREG(index),_DEVCON_HS_UART_ENABLE_POS(index),1);
}


//******************************************************************************
/* Function :  DEVCON_HSUARTDisable_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_HSUARTDisable 

  Description:
    This template implements the WK variant of the PLIB_DEVCON_HSUARTDisable function.
*/

PLIB_TEMPLATE void DEVCON_HSUARTDisable_WK( DEVCON_MODULE_ID index )
{
    _SFR_BIT_WRITE(_DEVCON_HS_UART_ENABLE_VREG(index),_DEVCON_HS_UART_ENABLE_POS(index),0);
}


//******************************************************************************
/* Function :  DEVCON_ExistsHSUARTControl_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_ExistsHSUARTControl

  Description:
    This template implements the WK variant of the PLIB_DEVCON_ExistsHSUARTControl function.
*/

#define PLIB_DEVCON_ExistsHSUARTControl PLIB_DEVCON_ExistsHSUARTControl
PLIB_TEMPLATE bool DEVCON_ExistsHSUARTControl_WK( DEVCON_MODULE_ID index )
{
    return true;
}


#endif /*_DEVCON_HSUARTCONTROL_WK_H*/

/******************************************************************************
 End of File
*/

