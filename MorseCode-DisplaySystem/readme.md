# Project Declaration: Arduino Uno Serial Communication and Morse Code Display System

## Overview
This project aims to create a system using the Arduino Uno platform to display messages received via serial communication on an LCD screen. Additionally, the system will encode the message using Morse code and display the coded value on the LCD screen. The assumption is that the user inputs a single word, and it will be displayed on the screen until the next word is sent. If the word exceeds 16 characters, an autoscroll feature for the LCD screen will be implemented.

## Features
- **Serial Communication Display:** The system displays messages received through serial communication on an LCD screen.
- **Morse Code Encoding:** The message is encoded into Morse code, and the coded value is displayed on the LCD screen.
- **User Interaction:** The user inputs a single word, and it remains on the screen until the next word is sent.
- **Autoscroll:** If the word exceeds 16 characters, an autoscroll feature for the LCD screen is implemented.

## Hardware Components
- Arduino Uno
- LCD Screen
- Serial Communication Interface
- Wiring and Connectors

## Operation
1. The user sends a word via serial communication.
2. The system displays the word on the LCD screen.
3. Simultaneously, the system encodes the word into Morse code and displays the coded value on the LCD screen.
4. The displayed word remains until the next word is received.
5. If the word exceeds 16 characters, the LCD screen automatically scrolls to accommodate the entire word.

## Acknowledgments
We acknowledge the use of the Arduino Uno platform in creating this Serial Communication and Morse Code Display System.

## Documentation
For detailed documentation and setup instructions, please refer to [https://www.tinkercad.com/things/h3jGQJlprsM-morse-code-display-system?sharecode=KKOwxPHWeAyL_PT2k-ggcwC9YS-F33WRPUe7aWWqNyk].

## Contribution
Contributions to enhance or optimize the system are welcome.


