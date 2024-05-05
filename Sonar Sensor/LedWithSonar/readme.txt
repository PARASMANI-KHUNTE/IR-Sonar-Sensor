Sonar Sensor with LED Control

This Arduino code uses an ultrasonic (sonar) sensor to measure distance. If an object is detected within a threshold distance, it turns on an LED connected to pin 13 of the Arduino board.

Components Required:
- Arduino board
- Ultrasonic (Sonar) sensor
- LED
- Resistor (if needed for LED)

Wiring:
- Connect the ultrasonic sensor's trig pin to digital pin 10 on the Arduino.
- Connect the ultrasonic sensor's echo pin to digital pin 11 on the Arduino.
- Connect the anode (longer leg) of the LED to digital pin 13 on the Arduino.
- Connect the cathode (shorter leg) of the LED to the ground (GND) pin on the Arduino.
- Optionally, use a resistor between the LED's cathode and GND pin to limit current (if needed).

Instructions:
1. Upload the code to your Arduino board.
2. Adjust the threshold distance variable as needed.
3. Connect the components according to the wiring instructions.
4. Power up your Arduino board.

Note: Ensure that the LED's current rating is within the safe operating limits of the Arduino pin.
