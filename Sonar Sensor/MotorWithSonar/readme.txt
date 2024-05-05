Sonar Sensor with Motor Control

This Arduino code uses an ultrasonic (sonar) sensor to measure distance. If an object is detected within a threshold distance, it rotates a motor connected to a motor driver module in one direction.

Components Required:
- Arduino board
- Ultrasonic (Sonar) sensor
- Motor driver module
- DC motor

Wiring:
- Connect the ultrasonic sensor's trig pin to digital pin 10 on the Arduino.
- Connect the ultrasonic sensor's echo pin to digital pin 11 on the Arduino.
- Connect the motor driver module inputs to digital pins 8 and 9 on the Arduino.
- Connect the DC motor to the motor driver module outputs.

Instructions:
1. Upload the code to your Arduino board.
2. Adjust the threshold distance variable as needed.
3. Connect the components according to the wiring instructions.
4. Power up your Arduino board.

Note: Ensure that the motor driver module and motor are rated to handle the voltage and current requirements of your DC motor.
