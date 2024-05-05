int ledPin = 13; // LED connected to digital pin 13
int irSensorPin = 9; // IR sensor pin
int thresholdDistance = 50; // Threshold distance for IR sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as input
}

void loop() {
  int irDistance = digitalRead(irSensorPin);

  Serial.print("IR Sensor Output: ");
  Serial.println(irDistance);

  if (irDistance == LOW) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }

  delay(100);
}
