# Arduino LED Blink Project

This is a simple Arduino Uno project to blink an LED.

## Components Used
- Arduino Uno
- LED
- 125 ohm Resistor
- Breadboard
- Jumper Wires
- *(You can also use online Tinkercad software for simulation.)*

## Code

```cpp
int ledPin = 13; // Pin connected to the LED

void setup() {
    // Initialize the digital pin as an output
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Turn the LED ON
    digitalWrite(ledPin, HIGH);

    // Wait for 1 second (1000 milliseconds)
    delay(1000);

    // Turn the LED OFF
    digitalWrite(ledPin, LOW);

    // Wait for 1 second (1000 milliseconds)
    delay(1000);
}
