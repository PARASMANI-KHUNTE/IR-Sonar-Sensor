Sonar Sensor with Buzzer Control

This Arduino code uses an ultrasonic (sonar) sensor to measure distance. If an object is detected within a threshold distance, it activates a buzzer connected to a pin on the Arduino board.

Components Required:
- Arduino board
- Ultrasonic (Sonar) sensor
- Buzzer

Wiring:
- Connect the ultrasonic sensor's trig pin to digital pin 10 on the Arduino.
- Connect the ultrasonic sensor's echo pin to digital pin 11 on the Arduino.
- Connect the positive terminal of the buzzer to a digital pin (e.g., pin 8) on the Arduino.
- Connect the negative terminal of the buzzer to the ground (GND) pin on the Arduino.

Instructions:
1. Upload the code to your Arduino board.
2. Adjust the threshold distance variable as needed.
3. Connect the components according to the wiring instructions.
4. Power up your Arduino board.

Note: Ensure that the buzzer's current rating is within the safe operating limits of the Arduino pin.
