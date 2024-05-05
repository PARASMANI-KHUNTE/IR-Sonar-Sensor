int motorPin1 = 8; // Motor driver input pin 1
int motorPin2 = 9; // Motor driver input pin 2
int trigPin = 10; // Trigger pin of ultrasonic sensor
int echoPin = 11; // Echo pin of ultrasonic sensor
int thresholdDistance = 50; // Threshold distance in centimeters

void setup() {
  Serial.begin(9600);
  pinMode(motorPin1, OUTPUT); // Set motor driver input pin 1 as output
  pinMode(motorPin2, OUTPUT); // Set motor driver input pin 2 as output
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < thresholdDistance) {
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
