#include <msp430.h>
/*
 * File: main.c
 * Author: Will Cronin
 * Date Created: September 19th 2018
 * Date of Last Revision: September 19th 2018
 * Board Used: MSP430G2553
 */
int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P1DIR |= 0x41;                            // Set P1.0 and P1.6 to output direction


  for (;;)
  {
    volatile unsigned int i;
    for(i = 0; i<=50000; i++)
    {
        if((i % 2000) == 0)
        {
            P1OUT ^= 0x40;      // Toggle P1.6 using exclusive-OR
        }

        if((i % 1000) == 0)
        {
            P1OUT ^= 0x01;      // Toggle P1.0 using exclusive-OR
        }
    }

  }
}



