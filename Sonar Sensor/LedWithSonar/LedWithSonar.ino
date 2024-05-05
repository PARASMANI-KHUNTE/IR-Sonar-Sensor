int ledPin = 13; // LED connected to digital pin 13
int trigPin = 9; // Trigger pin of ultrasonic sensor
int echoPin = 10; // Echo pin of ultrasonic sensor
int thresholdDistance = 50; // Threshold distance in centimeters

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Set LED pin as output
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
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }

  delay(100);
}
