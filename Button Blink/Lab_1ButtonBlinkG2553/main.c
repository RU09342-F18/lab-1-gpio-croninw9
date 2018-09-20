#include <msp430.h> 


/**
 * File: main.c
 * Author: Will Cronin
 * Date Created: September 12th 2018
 * Date of Last Revision: September 19th 2018
 * Board Used: MSP430G2553
 */
int main(void)
{
    int j;
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1SEL = 0;
	P1DIR |= BIT0; //Set port 1.0 as output (LED)
	P1DIR &= ~BIT3; //Set port 1.3 as input (Button)

	P1REN |= BIT3; //enable pull up resistor
	P1OUT |= BIT3;
	P1OUT &= ~(BIT0);

	while(1)
	{
	    j = P1IN & BIT3;
	    if(j != 8)
	    {
	        P1OUT ^= 0x01; // Blink LED
	        __delay_cycles(1000000);
	    }
	    else
	    {
	        P1OUT &= ~(BIT0);
	    }
	}
}
