#include <msp430.h> 


/**
 * main.c
 * MSP430f5529
 */
int main(void)
{
    int j;
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1SEL = 0;
	P2SEL = 0;
	P1DIR |= BIT0; //Set port 1.0 as output (LED)
	P2DIR &= ~BIT1; //Set port 2.1 as input (Button)

	P2REN |= BIT1; //enable pull up resistor
	P2OUT |= BIT1;
	P1OUT &= ~(BIT0);

	while(1)
	{
	    j = P2IN & BIT1;
	    if(j != 2)
	    {
	        P1OUT ^= 0x01; // Blink LED
	    }
	    else
	    {
	        P1OUT &= ~(BIT0);
	    }
	}
}
