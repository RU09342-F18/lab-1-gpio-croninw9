/*
 * File: main.c
 * Author: Will Cronin
 * Date Created: September 19th 2018
 * Date of Last Revision: September 19th 2018
 * Board Used: MSP430G2553
 */

#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P1DIR |= 0x01;                            // Set P1.0 as an output
  //P1OUT = 0x00;

  for (;;)
  {
    volatile unsigned int i;

    P1OUT ^= 0x01;                          // Toggle P1.0 using exclusive-OR

    i = 50000;                              // Delay
    do (i--);
    while (i != 0);
  }
}
