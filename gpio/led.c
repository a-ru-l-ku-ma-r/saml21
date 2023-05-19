/*
 * LED.c
 * toggling the LED every 10000 counts
 */ 


#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "sam.h"


// LED PIN Assignment
#define LED PORT_PB10         




int main(void)
{
	/* Initialize the SAM system */
	SystemInit();
	
	
	//configure as Output
	REG_PORT_DIRSET1 = LED; 


	
	while (1)
	{
		
		for(unsigned int i=0; i<=10000;i++)   // loop
		{
			REG_PORT_OUTSET1 = LED;   // set LED as High		
		}


		for(unsigned int j=0; j<=10000;j++) // loop
		{
			REG_PORT_OUTCLR1 = LED;  //clear LED as Low

		}

	}
}
