/*
 * LED.c
 * toggling the LED every 5000 counts
 */ 


#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "sam.h"


// LED PIN Assignment
#define LED08 PORT_PA02         


int main(void)
{
	/* Initialize the SAM system */
	SystemInit();
	
	REG_PORT_DIRSET0 = LED08; 

	while (1)
	{
		
		for(unsigned int i=0; i<=5000;i++)   
		{
			REG_PORT_OUTSET0 = LED08;   // set LED19 as High
		}
			
		for(unsigned int j=0; j<=5000;j++) // loop
		{
			REG_PORT_OUTCLR0 = LED08;  //clear LED19 as Low
		}

	}
}

