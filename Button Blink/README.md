# Button Blink
The Button Blink code allows an on-board LED to toggle on an off with a the push of a button turning the LED blinking off or on.

## Boards Used
* MSP430G2553
* MSP430F5529

## How the Code Works (G2553)
The code works by setting Pin 1.0 as an output and Pin 1.3 as an input. The code also enables a pull up resistor on the button to ensure accurate button presses. The code then goes into a loop with an if-else statement where if the button is pressed the LED will begin to blink through the XOR function. When the button is pressed again, the blinking will cease.

### Pin Outs
Pin 1.0 - LED output 
Pin 1.3 - Button Input

## How the Code Works (F5529)
The code works by setting Pin 1.0 as an output and Pin 2.1 as an input. The code also enables a pull up resistor on the button to ensure accurate button presses. The code then goes into a loop with an if-else statement where if the button is pressed the LED will begin to blink through the XOR function. When the button is pressed again, the blinking will cease.

### Pin Outs
Pin 1.0 - LED Output
Pin 2.1 - Button Input
