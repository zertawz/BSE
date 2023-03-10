//-----------------------------------------------------------------------------
// TP1_BSE.c
//-----------------------------------------------------------------------------
// AUTH: 
// DATE: 
//
// Target: C8051F02x
// Tool chain: KEIL Microvision5
//
//-----------------------------------------------------------------------------
// Déclarations Registres et Bits de l'espace SFR
#include "intrins.h"
#include<c8051F020.h>
#include<c8051F020_SFR16.h>
#include<TP1_BSE_Lib_Config_Globale.h>
#include<TP1_BSE_Lib_Divers.h>

#define LED_ON 1
#define LED_OFF 0

sbit LED = P1^6;  // LED

//------------------------------------------------------------------------------------
// Function Prototypes

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// MAIN Routine
//-----------------------------------------------------------------------------
void main (void) {
	
	      Init_Device();
	
        while(1)
        {  
						 LED = LED_ON;
					   Software_Delay(2); // Allumaghe 20ms
					   LED = LED_OFF;
					   Software_Delay(10); // Extinction 100ms						 
        }						               	
			}
//*****************************************************************************	 
