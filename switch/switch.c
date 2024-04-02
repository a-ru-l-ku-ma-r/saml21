/*
 * switch.c
 * read the input GPIO pin status
 */ 


#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "sam.h"


// LED PIN Assignment
#define SWITCH PORT_PA02         

char status;

int main(void)
{
	/* Initialize the SAM system */
	SystemInit();
	
	
	//configure as Input
	PORT->Group[0].PINCFG[02].bit.INEN   = 1; 
  	PORT->Group[0].PINCFG[02].bit.PULLEN = 1;

  	REG_PORT_OUTSET0 = SWITCH ;


	
	while (1)
	{
		
		if(!SWITCH)   // loop
		{
			status = 1;   // switch as High state
		}


		else
		{
			status = 0;  // switch as Low state
		}

	}
}
