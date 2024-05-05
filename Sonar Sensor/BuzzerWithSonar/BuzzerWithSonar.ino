int buzzer = 4;
int trig = 9;
int echo = 10;
int thresholdDistance = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long duration = pulseIn(echo,HIGH);

  float distance = (duration * 0.0343) / 2;

  Serial.print("Distance: ");
  Serial.println(distance);


  if(distance < thresholdDistance){
    
    digitalWrite(buzzer,HIGH);
  }else{
    digitalWrite(buzzer,LOW);
  }


  delay(100);
}
