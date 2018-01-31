/*********************************************************************
 * File Name: http_net_print.c
 *
 * Provides callback headers and resolution for user's custom
 * HTTP NET Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 *
 * Software License Agreement
 *
 * Copyright (C) 2012 Microchip Technology Inc.  All rights
 * reserved.
 * Microchip licenses to you the right to use, modify, copy, and distribute
 * software only embedded on a Microchip microcontroller or digital signal 
 * controller that is integrated into your product or third party product
 * (pursuant to the sublicense terms in the accompanying license agreement)

 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE 
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER 
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *********************************************************************/

#include "tcpip/tcpip.h"
#include "system_config.h"

<#-- Following content is for web_net_server_nvm_mpfs demo -->
<#if CONFIG_TCPIP_HTTP_NET_DYNVAR_PROCESS == true>
/****************************************************************************
Section:
    Dynamic Variables Function Prototypes

Remarks:
    There are no predefined functions that do the dynamic variables processing.
    The only interface between the application and the HTTP module is done using
    TCPIP_HTTP_NET_UserHandlerRegister() call.
    Therefore, whenever the HTTP module will encounter a dynamic variable it will
    simply call the "dynamicPrint" function that was registrated!
    It is up to the application to detect what dynamic variable is processed by
    examining the TCPIP_HTTP_DYN_VAR_DCPT* parameter that's passed to the function
    and take appropriate action.

    The mpfs2 generator does not generate a list of dynamic variables functions anymore.
    All the dynamic variable processing happens at run time!
    Web pages could be changed at run time and the web server will work just fine
    (providing that the application properly processes the dynamic variables).

    These are just functions  belonging to the application.
    They can have any name the application uses to.

  ***************************************************************************/

TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_hellomsg(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_cookiename(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_cookiefav(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_builddate(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_led(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ledSelected(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_version(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_drive(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_fstype(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_btn(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_pot(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_uploadedmd5(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_snmp_en(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_read_comm(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_write_comm(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_status_fail(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_mac(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_hostname(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dhcpchecked(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_ip(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_gw(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_subnet(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dns1(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dns2(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_reboot(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_rebootaddr(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_status_ok(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_smtps_en(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_status(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_status_msg(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_service(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_user(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_pass(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_host(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);

/****************************************************************************
  Section:
    Application Dynamic Variables processing functions.
    For easy processing and facilitating of the transfer from the old style of 
    processing the dynamic variables with pre-defined functions,
    the new dynamic variables functions maintain the old name and
    a table showing the correspondence between the dynamic variable name
    and the function that processes that variable i smaintained in this
    coming HTTP_APP_DynVarTbl[].
    Note that this is just an example.
    The application could opt for any type of proccessing it needs to do at run time.

    See http_net.h for details regarding each of these functions
  ***************************************************************************/

// application HTTP dynamic variables processing function
typedef TCPIP_HTTP_DYN_PRINT_RES (*HTTP_APP_DYNVAR_FNC)(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt);

// an entry for the application processing HTTP dynamic variables
typedef struct
{
    const char*             varName;    // name of the dynamic variable
    HTTP_APP_DYNVAR_FNC     varFnc;     // processing function     
}HTTP_APP_DYNVAR_ENTRY;

// table with the processed dynamic variables in this demo
static HTTP_APP_DYNVAR_ENTRY HTTP_APP_DynVarTbl[] = 
{
    // varName                      varFnc
    {"hellomsg",                    TCPIP_HTTP_Print_hellomsg},
    {"cookiename",                  TCPIP_HTTP_Print_cookiename},
    {"cookiefav",                   TCPIP_HTTP_Print_cookiefav},
    {"builddate",                   TCPIP_HTTP_Print_builddate},
    {"led",                         TCPIP_HTTP_Print_led},
    {"ledSelected",                 TCPIP_HTTP_Print_ledSelected},
    {"version",                     TCPIP_HTTP_Print_version},
    {"drive",                       TCPIP_HTTP_Print_drive},
    {"fstype",                      TCPIP_HTTP_Print_fstype},
    {"btn",                         TCPIP_HTTP_Print_btn},
    {"pot",                         TCPIP_HTTP_Print_pot},
    {"uploadedmd5",                 TCPIP_HTTP_Print_uploadedmd5},
    {"snmp_en",                     TCPIP_HTTP_Print_snmp_en},
    {"read_comm",                   TCPIP_HTTP_Print_read_comm},
    {"write_comm",                  TCPIP_HTTP_Print_write_comm},
    {"status_fail",                 TCPIP_HTTP_Print_status_fail},
    {"config_mac",                  TCPIP_HTTP_Print_config_mac},
    {"config_hostname",             TCPIP_HTTP_Print_config_hostname},
    {"config_dhcpchecked",          TCPIP_HTTP_Print_config_dhcpchecked},
    {"config_ip",                   TCPIP_HTTP_Print_config_ip},
    {"config_gw",                   TCPIP_HTTP_Print_config_gw},
    {"config_subnet",               TCPIP_HTTP_Print_config_subnet},
    {"config_dns1",                 TCPIP_HTTP_Print_config_dns1},
    {"config_dns2",                 TCPIP_HTTP_Print_config_dns2},
    {"reboot",                      TCPIP_HTTP_Print_reboot},
    {"rebootaddr",                  TCPIP_HTTP_Print_rebootaddr},
    {"status_ok",                   TCPIP_HTTP_Print_status_ok},
    {"smtps_en",                    TCPIP_HTTP_Print_smtps_en},
    {"ddns_status",                 TCPIP_HTTP_Print_ddns_status},
    {"ddns_status_msg",             TCPIP_HTTP_Print_ddns_status_msg},
    {"ddns_service",                TCPIP_HTTP_Print_ddns_service},
    {"ddns_user",                   TCPIP_HTTP_Print_ddns_user},
    {"ddns_pass",                   TCPIP_HTTP_Print_ddns_pass},
    {"ddns_host",                   TCPIP_HTTP_Print_ddns_host},
};


// Function that processes the dynamic variables
// It uses the HTTP_APP_DynVarTbl[] for detecting which variable is currently processed
// and what function should be launched.
//
// Note: Again, this is just an example.
// Processing a large number of dynamic variables using this approach is highly inneficient
// and should be avoided.
// Better methods should be emplyed rather than linearly polling each variable name until the required name was found.
//
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_NET_DynPrint(HTTP_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT* vDcpt, const TCPIP_HTTP_NET_USER_CALLBACK* pCBack)
{
    int ix;
    HTTP_APP_DYNVAR_ENTRY* pEntry;

    // search for a dynamic variable name
    pEntry = HTTP_APP_DynVarTbl;
    for(ix = 0; ix < sizeof(HTTP_APP_DynVarTbl)/sizeof(*HTTP_APP_DynVarTbl); ix++, pEntry++)
    {
        if(strcmp(vDcpt->dynName, pEntry->varName) == 0)
        {   // found it
            return (*pEntry->varFnc)(connHandle, vDcpt);
        }
    }

    // not found; do nothing
    return TCPIP_HTTP_DYN_PRINT_RES_DONE;
}
</#if>


