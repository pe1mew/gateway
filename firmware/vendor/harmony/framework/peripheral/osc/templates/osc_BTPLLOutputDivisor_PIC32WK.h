/*******************************************************************************
  OSC Peripheral Library Template Implementation

  File Name:
    osc_BTPLLOutputDivisor_PIC32WK.h

  Summary:
    OSC PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BTPLLOutputDivisor
    and its Variant : PIC32WK
    For following APIs :
        PLIB_OSC_ExistsBTPLLOutputDivisor
        PLIB_OSC_BTPLLOutputDivisorSet
        PLIB_OSC_BTPLLOutputDivisorGet

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

#ifndef _OSC_BTPLLOUTPUTDIVISOR_PIC32WK_H
#define _OSC_BTPLLOUTPUTDIVISOR_PIC32WK_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _OSC_BTPLL_OUTPUT_DIVISOR_VREG(index)
    _OSC_OSC_REGISTER_LOCK_VREG(index)

  MASKs: 
    _OSC_BTPLL_OUTPUT_DIVISOR_MASK(index)
    _OSC_OSC_REGISTER_LOCK_MASK(index)

  POSs: 
    _OSC_BTPLL_OUTPUT_DIVISOR_POS(index)
    _OSC_OSC_REGISTER_LOCK_POS(index)

  LENs: 
    _OSC_BTPLL_OUTPUT_DIVISOR_LEN(index)
    _OSC_OSC_REGISTER_LOCK_LEN(index)

*/


//******************************************************************************
/* Function :  OSC_ExistsBTPLLOutputDivisor_PIC32WK

  Summary:
    Implements PIC32WK variant of PLIB_OSC_ExistsBTPLLOutputDivisor

  Description:
    This template implements the PIC32WK variant of the PLIB_OSC_ExistsBTPLLOutputDivisor function.
*/

#define PLIB_OSC_ExistsBTPLLOutputDivisor PLIB_OSC_ExistsBTPLLOutputDivisor
PLIB_TEMPLATE bool OSC_ExistsBTPLLOutputDivisor_PIC32WK( OSC_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  OSC_BTPLLOutputDivisorSet_PIC32WK

  Summary:
    Implements PIC32WK variant of PLIB_OSC_BTPLLOutputDivisorSet 

  Description:
    This template implements the PIC32WK variant of the PLIB_OSC_BTPLLOutputDivisorSet function.
*/

PLIB_TEMPLATE void OSC_BTPLLOutputDivisorSet_PIC32WK( OSC_MODULE_ID index , OSC_BTPLL_OUT_DIV PLLOutDiv )
{
    _SFR_FIELD_WRITE(_OSC_BTPLL_OUTPUT_DIVISOR_VREG(index),
                     _OSC_BTPLL_OUTPUT_DIVISOR_MASK(index),
                     _OSC_BTPLL_OUTPUT_DIVISOR_POS(index) ,
                     PLLOutDiv );
}


//******************************************************************************
/* Function :  OSC_BTPLLOutputDivisorGet_PIC32WK

  Summary:
    Implements PIC32WK variant of PLIB_OSC_BTPLLOutputDivisorGet 

  Description:
    This template implements the PIC32WK variant of the PLIB_OSC_BTPLLOutputDivisorGet function.
*/

PLIB_TEMPLATE uint16_t OSC_BTPLLOutputDivisorGet_PIC32WK( OSC_MODULE_ID index )
{
    return (uint16_t) _SFR_FIELD_READ(_OSC_BTPLL_OUTPUT_DIVISOR_VREG(index),
                           _OSC_BTPLL_OUTPUT_DIVISOR_MASK(index),
                           _OSC_BTPLL_OUTPUT_DIVISOR_POS(index) );

}


#endif /*_OSC_BTPLLOUTPUTDIVISOR_PIC32WK_H*/

/******************************************************************************
 End of File
*/

