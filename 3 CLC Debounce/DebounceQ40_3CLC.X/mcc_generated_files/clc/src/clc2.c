/**
 * CLC2 Generated Driver File.
 * 
 * @file clc2.c
 * 
 * @ingroup  clc2
 * 
 * @brief This file contains the API implementations for the CLC2 driver.
 *
 * @version CLC2 Driver Version 1.0.1
*/
/*
� [2023] Microchip Technology Inc. and its subsidiaries.

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


#include <xc.h>
#include "../clc2.h"


void CLC2_Initialize(void)
{
    
    // SLCT 0x1; 
    CLCSELECT = 0x1;
    // LCG1POL inverted; LCG2POL not_inverted; LCG3POL not_inverted; LCG4POL not_inverted; LCPOL inverted; 
    CLCnPOL = 0x81;
    // LCD1S CLCIN0 (CLCIN0PPS); 
    CLCnSEL0 = 0x0;
    // LCD2S CLCIN0 (CLCIN0PPS); 
    CLCnSEL1 = 0x0;
    // LCD3S CLC3_OUT; 
    CLCnSEL2 = 0x24;
    // LCD4S CLC1_OUT; 
    CLCnSEL3 = 0x22;
    // LCG1D1N disabled; LCG1D1T disabled; LCG1D2N disabled; LCG1D2T disabled; LCG1D3N disabled; LCG1D3T disabled; LCG1D4N disabled; LCG1D4T disabled; 
    CLCnGLS0 = 0x0;
    // LCG2D1N disabled; LCG2D1T disabled; LCG2D2N enabled; LCG2D2T disabled; LCG2D3N enabled; LCG2D3T disabled; LCG2D4N disabled; LCG2D4T disabled; 
    CLCnGLS1 = 0x14;
    // LCG3D1N disabled; LCG3D1T disabled; LCG3D2N enabled; LCG3D2T disabled; LCG3D3N disabled; LCG3D3T disabled; LCG3D4N enabled; LCG3D4T disabled; 
    CLCnGLS2 = 0x44;
    // LCG4D1N disabled; LCG4D1T disabled; LCG4D2N disabled; LCG4D2T disabled; LCG4D3N enabled; LCG4D3T disabled; LCG4D4N enabled; LCG4D4T disabled; 
    CLCnGLS3 = 0x50;
    // LCOUT 0x00; 
    CLCDATA = 0x0;
    // LCMODE 4-input AND; LCINTN disabled; LCINTP disabled; LCEN enabled; 
    CLCnCON = 0x82;

}


bool CLC2_OutputStatusGet(void)
{
    return(CLCDATAbits.CLC2OUT);
}
/**
 End of File
*/
