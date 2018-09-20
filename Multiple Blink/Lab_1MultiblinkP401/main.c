#include "msp.h"


/**
 * File: main.c
 * Author: Will Cronin
 * Date Created: September 19th 2018
 * Date of Last Revision: September 19th 2018
 * Board: MSP432P401R
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
	P1DIR |= 0x01;                            // Set P1.0 to output direction
	P2DIR |= 0x02;                            // Set P2.1 to output direction


	for (;;)
	{
	  volatile unsigned int i;
	    for(i = 0; i<=100000; i++)
	    {
	        if((i % 20000) == 0)
	        {
	            P2OUT ^= 0x02;      // Toggle P2.1 using exclusive-OR
	        }

	        if((i % 40000) == 0)
	        {
	            P1OUT ^= 0x01;      // Toggle P1.0 using exclusive-OR
	        }
	    }

	  }
}
