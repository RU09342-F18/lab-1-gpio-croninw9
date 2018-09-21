# Off Board Blink
Off board blink uses a microprocessor off of a board to simulate multiple LEDs blinking on a breadboard

## Board Used
* MSP430G2553

## Pin Outs
Pin 1 - DVcc
Pin 2 - Output (LED)
Pin 14 - Output (LED)
Pin 16 - Reset
Pin 20 - Ground

## How it works
The microprocessor first must be removed from the board and put onto a breadboard. The microprocessor takes the power supplied and distributes it on intervals to the LEDs which have connected resistors to ground to not overload them. The reset button is connected via a series resistor and parallel capacitor connected to ground in order to make button presses accurate. 
