int motorPin1 = 8; // Motor driver input pin 1
int motorPin2 = 9; // Motor driver input pin 2
int irSensorPin = 10; // IR sensor pin
int thresholdDistance = 50; // Threshold distance for IR sensor

void setup() {
  Serial.begin(9600);
  pinMode(motorPin1, OUTPUT); // Set motor driver input pin 1 as output
  pinMode(motorPin2, OUTPUT); // Set motor driver input pin 2 as output
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as input
}

void loop() {
  int irDistance = digitalRead(irSensorPin);

  Serial.print("IR Sensor Output: ");
  Serial.println(irDistance);

  if (irDistance == LOW) {
    // Rotate the motor in one direction (adjust as needed based on motor specifications)
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  } else {
    // Stop the motor (adjust as needed based on motor specifications)
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
  }

  delay(100);
}
