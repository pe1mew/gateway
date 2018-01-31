/*******************************************************************************
 Source file for the Net Pres Certificate Store functions to work with Harmony


  Summary:


  Description:

*******************************************************************************/

/*******************************************************************************
File Name: net_pres_cert_stroe.c
Copyright (c) 2015 released Microchip Technology Inc.  All rights
reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED ?AS IS? WITHOUT WARRANTY OF ANY KIND,
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
#include "net/pres/net_pres_certstore.h"

// DST Root CA X3
//-----BEGIN CERTIFICATE-----
//MIIDSjCCAjKgAwIBAgIQRK+wgNajJ7qJMDmGLvhAazANBgkqhkiG9w0BAQUFADA/
//MSQwIgYDVQQKExtEaWdpdGFsIFNpZ25hdHVyZSBUcnVzdCBDby4xFzAVBgNVBAMT
//DkRTVCBSb290IENBIFgzMB4XDTAwMDkzMDIxMTIxOVoXDTIxMDkzMDE0MDExNVow
//PzEkMCIGA1UEChMbRGlnaXRhbCBTaWduYXR1cmUgVHJ1c3QgQ28uMRcwFQYDVQQD
//Ew5EU1QgUm9vdCBDQSBYMzCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEB
//AN+v6ZdQCINXtMxiZfaQguzH0yxrMMpb7NnDfcdAwRgUi+DoM3ZJKuM/IUmTrE4O
//rz5Iy2Xu/NMhD2XSKtkyj4zl93ewEnu1lcCJo6m67XMuegwGMoOifooUMM0RoOEq
//OLl5CjH9UL2AZd+3UWODyOKIYepLYYHsUmu5ouJLGiifSKOeDNoJjj4XLh7dIN9b
//xiqKqy69cK3FCxolkHRyxXtqqzTWMIn/5WgTe1QLyNau7Fqckh49ZLOMxt+/yUFw
//7BZy1SbsOFU5Q9D8/RhcQPGX69Wam40dutolucbY38EVAjqr2m7xPi71XAicPNaD
//aeQQmxkqtilX4+U9m5/wAl0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNV
//HQ8BAf8EBAMCAQYwHQYDVR0OBBYEFMSnsaR7LHH62+FLkHX/xBVghYkQMA0GCSqG
//SIb3DQEBBQUAA4IBAQCjGiybFwBcqR7uKGY3Or+Dxz9LwwmglSBd49lZRNI+DT69
//ikugdB/OEIKcdBodfpga3csTS7MgROSR6cz8faXbauX+5v3gTt23ADq1cEmv8uXr
//AvHRAosZy5Q6XkjEGB5YGV8eAlrwDPGxrancWYaLbumR9YbK+rlmM6pZW87ipxZz
//R8srzJmwN0jP41ZL9c8PDHIyh8bwRLtTcm1D9SZImlJnt1ir/md2cXjbDaJWFBM5
//JDGFoqgCWjBH4d1QB7wCCZAA62RjYJsWvIjJEubSfZGL+T0yjWW06XyxV3bqxbYo
//Ob8VZRzI9neWagqNdwvYkQsEjgfbKbYK7p2CNTUQ
//    -----END CERTIFICATE-----
// openssl x509 -in "DST Root CA X3" -inform PEM -out cert.der -outform DER
// srec_cat cert.der -binary -output cert.c -c-Array DST_Root_CA_X3 -include
const unsigned char DST_Root_CA_X3[] =
{
    0x30, 0x82, 0x03, 0x4A, 0x30, 0x82, 0x02, 0x32, 0xA0, 0x03, 0x02, 0x01,
    0x02, 0x02, 0x10, 0x44, 0xAF, 0xB0, 0x80, 0xD6, 0xA3, 0x27, 0xBA, 0x89,
    0x30, 0x39, 0x86, 0x2E, 0xF8, 0x40, 0x6B, 0x30, 0x0D, 0x06, 0x09, 0x2A,
    0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x3F,
    0x31, 0x24, 0x30, 0x22, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x1B, 0x44,
    0x69, 0x67, 0x69, 0x74, 0x61, 0x6C, 0x20, 0x53, 0x69, 0x67, 0x6E, 0x61,
    0x74, 0x75, 0x72, 0x65, 0x20, 0x54, 0x72, 0x75, 0x73, 0x74, 0x20, 0x43,
    0x6F, 0x2E, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13,
    0x0E, 0x44, 0x53, 0x54, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43, 0x41,
    0x20, 0x58, 0x33, 0x30, 0x1E, 0x17, 0x0D, 0x30, 0x30, 0x30, 0x39, 0x33,
    0x30, 0x32, 0x31, 0x31, 0x32, 0x31, 0x39, 0x5A, 0x17, 0x0D, 0x32, 0x31,
    0x30, 0x39, 0x33, 0x30, 0x31, 0x34, 0x30, 0x31, 0x31, 0x35, 0x5A, 0x30,
    0x3F, 0x31, 0x24, 0x30, 0x22, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x1B,
    0x44, 0x69, 0x67, 0x69, 0x74, 0x61, 0x6C, 0x20, 0x53, 0x69, 0x67, 0x6E,
    0x61, 0x74, 0x75, 0x72, 0x65, 0x20, 0x54, 0x72, 0x75, 0x73, 0x74, 0x20,
    0x43, 0x6F, 0x2E, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03,
    0x13, 0x0E, 0x44, 0x53, 0x54, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43,
    0x41, 0x20, 0x58, 0x33, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0D, 0x06, 0x09,
    0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03,
    0x82, 0x01, 0x0F, 0x00, 0x30, 0x82, 0x01, 0x0A, 0x02, 0x82, 0x01, 0x01,
    0x00, 0xDF, 0xAF, 0xE9, 0x97, 0x50, 0x08, 0x83, 0x57, 0xB4, 0xCC, 0x62,
    0x65, 0xF6, 0x90, 0x82, 0xEC, 0xC7, 0xD3, 0x2C, 0x6B, 0x30, 0xCA, 0x5B,
    0xEC, 0xD9, 0xC3, 0x7D, 0xC7, 0x40, 0xC1, 0x18, 0x14, 0x8B, 0xE0, 0xE8,
    0x33, 0x76, 0x49, 0x2A, 0xE3, 0x3F, 0x21, 0x49, 0x93, 0xAC, 0x4E, 0x0E,
    0xAF, 0x3E, 0x48, 0xCB, 0x65, 0xEE, 0xFC, 0xD3, 0x21, 0x0F, 0x65, 0xD2,
    0x2A, 0xD9, 0x32, 0x8F, 0x8C, 0xE5, 0xF7, 0x77, 0xB0, 0x12, 0x7B, 0xB5,
    0x95, 0xC0, 0x89, 0xA3, 0xA9, 0xBA, 0xED, 0x73, 0x2E, 0x7A, 0x0C, 0x06,
    0x32, 0x83, 0xA2, 0x7E, 0x8A, 0x14, 0x30, 0xCD, 0x11, 0xA0, 0xE1, 0x2A,
    0x38, 0xB9, 0x79, 0x0A, 0x31, 0xFD, 0x50, 0xBD, 0x80, 0x65, 0xDF, 0xB7,
    0x51, 0x63, 0x83, 0xC8, 0xE2, 0x88, 0x61, 0xEA, 0x4B, 0x61, 0x81, 0xEC,
    0x52, 0x6B, 0xB9, 0xA2, 0xE2, 0x4B, 0x1A, 0x28, 0x9F, 0x48, 0xA3, 0x9E,
    0x0C, 0xDA, 0x09, 0x8E, 0x3E, 0x17, 0x2E, 0x1E, 0xDD, 0x20, 0xDF, 0x5B,
    0xC6, 0x2A, 0x8A, 0xAB, 0x2E, 0xBD, 0x70, 0xAD, 0xC5, 0x0B, 0x1A, 0x25,
    0x90, 0x74, 0x72, 0xC5, 0x7B, 0x6A, 0xAB, 0x34, 0xD6, 0x30, 0x89, 0xFF,
    0xE5, 0x68, 0x13, 0x7B, 0x54, 0x0B, 0xC8, 0xD6, 0xAE, 0xEC, 0x5A, 0x9C,
    0x92, 0x1E, 0x3D, 0x64, 0xB3, 0x8C, 0xC6, 0xDF, 0xBF, 0xC9, 0x41, 0x70,
    0xEC, 0x16, 0x72, 0xD5, 0x26, 0xEC, 0x38, 0x55, 0x39, 0x43, 0xD0, 0xFC,
    0xFD, 0x18, 0x5C, 0x40, 0xF1, 0x97, 0xEB, 0xD5, 0x9A, 0x9B, 0x8D, 0x1D,
    0xBA, 0xDA, 0x25, 0xB9, 0xC6, 0xD8, 0xDF, 0xC1, 0x15, 0x02, 0x3A, 0xAB,
    0xDA, 0x6E, 0xF1, 0x3E, 0x2E, 0xF5, 0x5C, 0x08, 0x9C, 0x3C, 0xD6, 0x83,
    0x69, 0xE4, 0x10, 0x9B, 0x19, 0x2A, 0xB6, 0x29, 0x57, 0xE3, 0xE5, 0x3D,
    0x9B, 0x9F, 0xF0, 0x02, 0x5D, 0x02, 0x03, 0x01, 0x00, 0x01, 0xA3, 0x42,
    0x30, 0x40, 0x30, 0x0F, 0x06, 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF,
    0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xFF, 0x30, 0x0E, 0x06, 0x03, 0x55,
    0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04, 0x04, 0x03, 0x02, 0x01, 0x06, 0x30,
    0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14, 0xC4, 0xA7,
    0xB1, 0xA4, 0x7B, 0x2C, 0x71, 0xFA, 0xDB, 0xE1, 0x4B, 0x90, 0x75, 0xFF,
    0xC4, 0x15, 0x60, 0x85, 0x89, 0x10, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86,
    0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x82, 0x01,
    0x01, 0x00, 0xA3, 0x1A, 0x2C, 0x9B, 0x17, 0x00, 0x5C, 0xA9, 0x1E, 0xEE,
    0x28, 0x66, 0x37, 0x3A, 0xBF, 0x83, 0xC7, 0x3F, 0x4B, 0xC3, 0x09, 0xA0,
    0x95, 0x20, 0x5D, 0xE3, 0xD9, 0x59, 0x44, 0xD2, 0x3E, 0x0D, 0x3E, 0xBD,
    0x8A, 0x4B, 0xA0, 0x74, 0x1F, 0xCE, 0x10, 0x82, 0x9C, 0x74, 0x1A, 0x1D,
    0x7E, 0x98, 0x1A, 0xDD, 0xCB, 0x13, 0x4B, 0xB3, 0x20, 0x44, 0xE4, 0x91,
    0xE9, 0xCC, 0xFC, 0x7D, 0xA5, 0xDB, 0x6A, 0xE5, 0xFE, 0xE6, 0xFD, 0xE0,
    0x4E, 0xDD, 0xB7, 0x00, 0x3A, 0xB5, 0x70, 0x49, 0xAF, 0xF2, 0xE5, 0xEB,
    0x02, 0xF1, 0xD1, 0x02, 0x8B, 0x19, 0xCB, 0x94, 0x3A, 0x5E, 0x48, 0xC4,
    0x18, 0x1E, 0x58, 0x19, 0x5F, 0x1E, 0x02, 0x5A, 0xF0, 0x0C, 0xF1, 0xB1,
    0xAD, 0xA9, 0xDC, 0x59, 0x86, 0x8B, 0x6E, 0xE9, 0x91, 0xF5, 0x86, 0xCA,
    0xFA, 0xB9, 0x66, 0x33, 0xAA, 0x59, 0x5B, 0xCE, 0xE2, 0xA7, 0x16, 0x73,
    0x47, 0xCB, 0x2B, 0xCC, 0x99, 0xB0, 0x37, 0x48, 0xCF, 0xE3, 0x56, 0x4B,
    0xF5, 0xCF, 0x0F, 0x0C, 0x72, 0x32, 0x87, 0xC6, 0xF0, 0x44, 0xBB, 0x53,
    0x72, 0x6D, 0x43, 0xF5, 0x26, 0x48, 0x9A, 0x52, 0x67, 0xB7, 0x58, 0xAB,
    0xFE, 0x67, 0x76, 0x71, 0x78, 0xDB, 0x0D, 0xA2, 0x56, 0x14, 0x13, 0x39,
    0x24, 0x31, 0x85, 0xA2, 0xA8, 0x02, 0x5A, 0x30, 0x47, 0xE1, 0xDD, 0x50,
    0x07, 0xBC, 0x02, 0x09, 0x90, 0x00, 0xEB, 0x64, 0x63, 0x60, 0x9B, 0x16,
    0xBC, 0x88, 0xC9, 0x12, 0xE6, 0xD2, 0x7D, 0x91, 0x8B, 0xF9, 0x3D, 0x32,
    0x8D, 0x65, 0xB4, 0xE9, 0x7C, 0xB1, 0x57, 0x76, 0xEA, 0xC5, 0xB6, 0x28,
    0x39, 0xBF, 0x15, 0x65, 0x1C, 0xC8, 0xF6, 0x77, 0x96, 0x6A, 0x0A, 0x8D,
    0x77, 0x0B, 0xD8, 0x91, 0x0B, 0x04, 0x8E, 0x07, 0xDB, 0x29, 0xB6, 0x0A,
    0xEE, 0x9D, 0x82, 0x35, 0x35, 0x10,
};


// Baltimore CyberTrust Root
//-----BEGIN CERTIFICATE-----
//MIIDdzCCAl+gAwIBAgIEAgAAuTANBgkqhkiG9w0BAQUFADBaMQswCQYDVQQGEwJJ
//RTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJlclRydXN0MSIwIAYD
//VQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTAwMDUxMjE4NDYwMFoX
//DTI1MDUxMjIzNTkwMFowWjELMAkGA1UEBhMCSUUxEjAQBgNVBAoTCUJhbHRpbW9y
//ZTETMBEGA1UECxMKQ3liZXJUcnVzdDEiMCAGA1UEAxMZQmFsdGltb3JlIEN5YmVy
//VHJ1c3QgUm9vdDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKMEuyKr
//mD1X6CZymrV51Cni4eiVgLGw41uOKymaZN+hXe2wCQVt2yguzmKiYv60iNoS6zjr
//IZ3AQSsBUnuId9Mcj8e6uYi1agnnc+gRQKfRzMpijS3ljwumUNKoUMMo6vWrJYeK
//mpYcqWe4PwzV9/lSEy/CG9VwcPCPwBLKBsua4dnKM3p31vjsufFoREJIE9LAwqSu
//XmD+tqYF/LTdB1kC1FkYmGP1pWPgkAx9XbIGevOF6uvUA65ehD5f/xXtabz5OTZy
//dc93Uk3zyZAsuT3lySNTPx8kmCFcB5kpvcY67Oduhjprl3RjM71oGDHweI12v/ye
//jl0qhqdNkNwnGjkCAwEAAaNFMEMwHQYDVR0OBBYEFOWdWTCCR1jMrPoIVDaGezq1
//BE3wMBIGA1UdEwEB/wQIMAYBAf8CAQMwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3
//DQEBBQUAA4IBAQCFDF2O5G9RaEIFoN27TyclhAO992T9Ldcw46QQF+vaKSm2eT92
//9hkTI7gQCvlYpNRhcL0EYWoSihfVCr3FvDB81ukMJY2GQE/szKN+OMY3EU/t3Wgx
//jkzSswF07r51XgdIGn9w/xZchMB5hbgF/X++ZRGjD8ACtPhSNzkE1akxehi/oCr0
//Epn3o0WC4zxe9Z2etciefC7IpJ5OCBRLbf1wbWsaY71k5h+3zvDyny67G7fyUIhz
//ksLi4xaNmjICq44Y3ekQEe5+NauQrz4wlHrQMz2nZQ/1/I6eYs9HRCwBXbsdtTLS
//R9I4LtD+gdwyah617jzV/OeBHRnDJELqYzmp
//-----END CERTIFICATE-----
// openssl x509 -in "Baltimore CyberTrust Root" -inform PEM -out cert.der -outform DER
// srec_cat cert.der -binary -output cert.c -c-Array Baltimore_CyberTrust_Root -include
const unsigned char Baltimore_CyberTrust_Root[] =
{
    0x30, 0x82, 0x03, 0x77, 0x30, 0x82, 0x02, 0x5F, 0xA0, 0x03, 0x02, 0x01,
    0x02, 0x02, 0x04, 0x02, 0x00, 0x00, 0xB9, 0x30, 0x0D, 0x06, 0x09, 0x2A,
    0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x5A,
    0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x49,
    0x45, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x09,
    0x42, 0x61, 0x6C, 0x74, 0x69, 0x6D, 0x6F, 0x72, 0x65, 0x31, 0x13, 0x30,
    0x11, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x13, 0x0A, 0x43, 0x79, 0x62, 0x65,
    0x72, 0x54, 0x72, 0x75, 0x73, 0x74, 0x31, 0x22, 0x30, 0x20, 0x06, 0x03,
    0x55, 0x04, 0x03, 0x13, 0x19, 0x42, 0x61, 0x6C, 0x74, 0x69, 0x6D, 0x6F,
    0x72, 0x65, 0x20, 0x43, 0x79, 0x62, 0x65, 0x72, 0x54, 0x72, 0x75, 0x73,
    0x74, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x30, 0x1E, 0x17, 0x0D, 0x30, 0x30,
    0x30, 0x35, 0x31, 0x32, 0x31, 0x38, 0x34, 0x36, 0x30, 0x30, 0x5A, 0x17,
    0x0D, 0x32, 0x35, 0x30, 0x35, 0x31, 0x32, 0x32, 0x33, 0x35, 0x39, 0x30,
    0x30, 0x5A, 0x30, 0x5A, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
    0x06, 0x13, 0x02, 0x49, 0x45, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55,
    0x04, 0x0A, 0x13, 0x09, 0x42, 0x61, 0x6C, 0x74, 0x69, 0x6D, 0x6F, 0x72,
    0x65, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x13, 0x0A,
    0x43, 0x79, 0x62, 0x65, 0x72, 0x54, 0x72, 0x75, 0x73, 0x74, 0x31, 0x22,
    0x30, 0x20, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x19, 0x42, 0x61, 0x6C,
    0x74, 0x69, 0x6D, 0x6F, 0x72, 0x65, 0x20, 0x43, 0x79, 0x62, 0x65, 0x72,
    0x54, 0x72, 0x75, 0x73, 0x74, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x30, 0x82,
    0x01, 0x22, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D,
    0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0F, 0x00, 0x30, 0x82,
    0x01, 0x0A, 0x02, 0x82, 0x01, 0x01, 0x00, 0xA3, 0x04, 0xBB, 0x22, 0xAB,
    0x98, 0x3D, 0x57, 0xE8, 0x26, 0x72, 0x9A, 0xB5, 0x79, 0xD4, 0x29, 0xE2,
    0xE1, 0xE8, 0x95, 0x80, 0xB1, 0xB0, 0xE3, 0x5B, 0x8E, 0x2B, 0x29, 0x9A,
    0x64, 0xDF, 0xA1, 0x5D, 0xED, 0xB0, 0x09, 0x05, 0x6D, 0xDB, 0x28, 0x2E,
    0xCE, 0x62, 0xA2, 0x62, 0xFE, 0xB4, 0x88, 0xDA, 0x12, 0xEB, 0x38, 0xEB,
    0x21, 0x9D, 0xC0, 0x41, 0x2B, 0x01, 0x52, 0x7B, 0x88, 0x77, 0xD3, 0x1C,
    0x8F, 0xC7, 0xBA, 0xB9, 0x88, 0xB5, 0x6A, 0x09, 0xE7, 0x73, 0xE8, 0x11,
    0x40, 0xA7, 0xD1, 0xCC, 0xCA, 0x62, 0x8D, 0x2D, 0xE5, 0x8F, 0x0B, 0xA6,
    0x50, 0xD2, 0xA8, 0x50, 0xC3, 0x28, 0xEA, 0xF5, 0xAB, 0x25, 0x87, 0x8A,
    0x9A, 0x96, 0x1C, 0xA9, 0x67, 0xB8, 0x3F, 0x0C, 0xD5, 0xF7, 0xF9, 0x52,
    0x13, 0x2F, 0xC2, 0x1B, 0xD5, 0x70, 0x70, 0xF0, 0x8F, 0xC0, 0x12, 0xCA,
    0x06, 0xCB, 0x9A, 0xE1, 0xD9, 0xCA, 0x33, 0x7A, 0x77, 0xD6, 0xF8, 0xEC,
    0xB9, 0xF1, 0x68, 0x44, 0x42, 0x48, 0x13, 0xD2, 0xC0, 0xC2, 0xA4, 0xAE,
    0x5E, 0x60, 0xFE, 0xB6, 0xA6, 0x05, 0xFC, 0xB4, 0xDD, 0x07, 0x59, 0x02,
    0xD4, 0x59, 0x18, 0x98, 0x63, 0xF5, 0xA5, 0x63, 0xE0, 0x90, 0x0C, 0x7D,
    0x5D, 0xB2, 0x06, 0x7A, 0xF3, 0x85, 0xEA, 0xEB, 0xD4, 0x03, 0xAE, 0x5E,
    0x84, 0x3E, 0x5F, 0xFF, 0x15, 0xED, 0x69, 0xBC, 0xF9, 0x39, 0x36, 0x72,
    0x75, 0xCF, 0x77, 0x52, 0x4D, 0xF3, 0xC9, 0x90, 0x2C, 0xB9, 0x3D, 0xE5,
    0xC9, 0x23, 0x53, 0x3F, 0x1F, 0x24, 0x98, 0x21, 0x5C, 0x07, 0x99, 0x29,
    0xBD, 0xC6, 0x3A, 0xEC, 0xE7, 0x6E, 0x86, 0x3A, 0x6B, 0x97, 0x74, 0x63,
    0x33, 0xBD, 0x68, 0x18, 0x31, 0xF0, 0x78, 0x8D, 0x76, 0xBF, 0xFC, 0x9E,
    0x8E, 0x5D, 0x2A, 0x86, 0xA7, 0x4D, 0x90, 0xDC, 0x27, 0x1A, 0x39, 0x02,
    0x03, 0x01, 0x00, 0x01, 0xA3, 0x45, 0x30, 0x43, 0x30, 0x1D, 0x06, 0x03,
    0x55, 0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14, 0xE5, 0x9D, 0x59, 0x30, 0x82,
    0x47, 0x58, 0xCC, 0xAC, 0xFA, 0x08, 0x54, 0x36, 0x86, 0x7B, 0x3A, 0xB5,
    0x04, 0x4D, 0xF0, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01,
    0xFF, 0x04, 0x08, 0x30, 0x06, 0x01, 0x01, 0xFF, 0x02, 0x01, 0x03, 0x30,
    0x0E, 0x06, 0x03, 0x55, 0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04, 0x04, 0x03,
    0x02, 0x01, 0x06, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
    0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x85,
    0x0C, 0x5D, 0x8E, 0xE4, 0x6F, 0x51, 0x68, 0x42, 0x05, 0xA0, 0xDD, 0xBB,
    0x4F, 0x27, 0x25, 0x84, 0x03, 0xBD, 0xF7, 0x64, 0xFD, 0x2D, 0xD7, 0x30,
    0xE3, 0xA4, 0x10, 0x17, 0xEB, 0xDA, 0x29, 0x29, 0xB6, 0x79, 0x3F, 0x76,
    0xF6, 0x19, 0x13, 0x23, 0xB8, 0x10, 0x0A, 0xF9, 0x58, 0xA4, 0xD4, 0x61,
    0x70, 0xBD, 0x04, 0x61, 0x6A, 0x12, 0x8A, 0x17, 0xD5, 0x0A, 0xBD, 0xC5,
    0xBC, 0x30, 0x7C, 0xD6, 0xE9, 0x0C, 0x25, 0x8D, 0x86, 0x40, 0x4F, 0xEC,
    0xCC, 0xA3, 0x7E, 0x38, 0xC6, 0x37, 0x11, 0x4F, 0xED, 0xDD, 0x68, 0x31,
    0x8E, 0x4C, 0xD2, 0xB3, 0x01, 0x74, 0xEE, 0xBE, 0x75, 0x5E, 0x07, 0x48,
    0x1A, 0x7F, 0x70, 0xFF, 0x16, 0x5C, 0x84, 0xC0, 0x79, 0x85, 0xB8, 0x05,
    0xFD, 0x7F, 0xBE, 0x65, 0x11, 0xA3, 0x0F, 0xC0, 0x02, 0xB4, 0xF8, 0x52,
    0x37, 0x39, 0x04, 0xD5, 0xA9, 0x31, 0x7A, 0x18, 0xBF, 0xA0, 0x2A, 0xF4,
    0x12, 0x99, 0xF7, 0xA3, 0x45, 0x82, 0xE3, 0x3C, 0x5E, 0xF5, 0x9D, 0x9E,
    0xB5, 0xC8, 0x9E, 0x7C, 0x2E, 0xC8, 0xA4, 0x9E, 0x4E, 0x08, 0x14, 0x4B,
    0x6D, 0xFD, 0x70, 0x6D, 0x6B, 0x1A, 0x63, 0xBD, 0x64, 0xE6, 0x1F, 0xB7,
    0xCE, 0xF0, 0xF2, 0x9F, 0x2E, 0xBB, 0x1B, 0xB7, 0xF2, 0x50, 0x88, 0x73,
    0x92, 0xC2, 0xE2, 0xE3, 0x16, 0x8D, 0x9A, 0x32, 0x02, 0xAB, 0x8E, 0x18,
    0xDD, 0xE9, 0x10, 0x11, 0xEE, 0x7E, 0x35, 0xAB, 0x90, 0xAF, 0x3E, 0x30,
    0x94, 0x7A, 0xD0, 0x33, 0x3D, 0xA7, 0x65, 0x0F, 0xF5, 0xFC, 0x8E, 0x9E,
    0x62, 0xCF, 0x47, 0x44, 0x2C, 0x01, 0x5D, 0xBB, 0x1D, 0xB5, 0x32, 0xD2,
    0x47, 0xD2, 0x38, 0x2E, 0xD0, 0xFE, 0x81, 0xDC, 0x32, 0x6A, 0x1E, 0xB5,
    0xEE, 0x3C, 0xD5, 0xFC, 0xE7, 0x81, 0x1D, 0x19, 0xC3, 0x24, 0x42, 0xEA,
    0x63, 0x39, 0xA9,
};

bool NET_PRES_CertStoreGetCACerts(const uint8_t ** certPtr, int32_t * certSize, uint8_t certIndex)
{
    switch (certIndex) {
        case 0:
            *certPtr = DST_Root_CA_X3;
            *certSize = sizeof(DST_Root_CA_X3);
            break;
            
        case 1:
            *certPtr = Baltimore_CyberTrust_Root;
            *certSize = sizeof(Baltimore_CyberTrust_Root);
            break;
            
        default:
            return false;
    }
    return true;
}
