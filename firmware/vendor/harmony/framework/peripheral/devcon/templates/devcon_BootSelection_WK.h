/*******************************************************************************
  DEVCON Peripheral Library Template Implementation

  File Name:
    devcon_BootSelection_WK.h

  Summary:
    DEVCON PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BootSelection
    and its Variant : WK
    For following APIs :
        PLIB_DEVCON_BootIPFSelect
        PLIB_DEVCON_BootExtSelect
        PLIB_DEVCON_ExistsBootSelection

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

#ifndef _DEVCON_BOOTSELECTION_WK_H
#define _DEVCON_BOOTSELECTION_WK_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _DEVCON_BOOT_SEL_VREG(index)

  MASKs: 
    _DEVCON_BOOT_SEL_MASK(index)

  POSs: 
    _DEVCON_BOOT_SEL_POS(index)

  LENs: 
    _DEVCON_BOOT_SEL_LEN(index)

*/


//******************************************************************************
/* Function :  DEVCON_BootIPFSelect_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_BootIPFSelect 

  Description:
    This template implements the WK variant of the PLIB_DEVCON_BootIPFSelect function.
*/

PLIB_TEMPLATE void DEVCON_BootIPFSelect_WK( DEVCON_MODULE_ID index )
{
    _SFR_BIT_WRITE(_DEVCON_BOOT_SEL_VREG(index),_DEVCON_BOOT_SEL_POS(index),0);
}


//******************************************************************************
/* Function :  DEVCON_BootExtSelect_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_BootExtSelect 

  Description:
    This template implements the WK variant of the PLIB_DEVCON_BootExtSelect function.
*/

PLIB_TEMPLATE void DEVCON_BootExtSelect_WK( DEVCON_MODULE_ID index )
{
    _SFR_BIT_WRITE(_DEVCON_BOOT_SEL_VREG(index),_DEVCON_BOOT_SEL_POS(index),1);
}


//******************************************************************************
/* Function :  DEVCON_ExistsBootSelection_WK

  Summary:
    Implements WK variant of PLIB_DEVCON_ExistsBootSelection

  Description:
    This template implements the WK variant of the PLIB_DEVCON_ExistsBootSelection function.
*/

#define PLIB_DEVCON_ExistsBootSelection PLIB_DEVCON_ExistsBootSelection
PLIB_TEMPLATE bool DEVCON_ExistsBootSelection_WK( DEVCON_MODULE_ID index )
{
    return true;
}


#endif /*_DEVCON_BOOTSELECTION_WK_H*/

/******************************************************************************
 End of File
*/

