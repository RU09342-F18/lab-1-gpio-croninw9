# Multiple Blink
The Multiple Blink code allows two on-board LEDs to toggle on an off with a 50% duty cycle and different speeds.

## Boards Used
* MSP430G2553
* MSP432P401R

## How the Code Works (G2553)
The code works by setting Pin 1.0 and Pin 1.6 as outputs. The code then goes into a loop with two if-else statements that go off at seperate points in the cycle with the LED on port 1.0 going off twice as much as port 1.6. 

### Pin Outs
Pin 1.0 - LED output 
Pin 1.6 - LED output

## How the Code Works (P401R)
The code works by setting Pin 1.0 and Pin 2.1 as outputs. The code then goes into a loop with two if-else statements that go off at seperate points in the cycle with the LED on port 1.0 going off twice as much as port 1.6. 

### Pin Outs
Pin 1.0 - LED Output
Pin 2.1 - LED Output
