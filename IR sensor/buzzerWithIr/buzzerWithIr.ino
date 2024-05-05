int buzzer = 4;
int irSensor = 9; // Assuming the IR sensor is connected to pin 9
int thresholdDistance = 50; // This threshold is now for proximity distance rather than distance measured by ultrasonic sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(irSensor, INPUT); // IR sensor is an input device
}

void loop() {
  // put your main code here, to run repeatedly:
  int irDistance = digitalRead(irSensor); // Read the digital value from IR sensor
  
  Serial.print("IR Sensor Output: ");
  Serial.println(irDistance); // Print IR sensor output for debugging
  
  if (irDistance == LOW) { // If an object is detected within the threshold distance
    digitalWrite(buzzer, HIGH); // Turn on the buzzer
  } else {
    digitalWrite(buzzer, LOW); // Turn off the buzzer
  }

  delay(100);
}
