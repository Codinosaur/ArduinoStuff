const int echo = 13;
const int trig = 12;
const int led = 5;
int distance;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup(){
 Serial.begin(9600);
 pinMode(echo, INPUT);
 pinMode(trig, OUTPUT);
 pinMode(led, OUTPUT);
}

void loop() {
distance = 0.01723 * readUltrasonicDistance(trig, echo); //(duration/2) * 0.034;
Serial.println(distance);
Serial.print(" cm");

 
analogWrite(led,distance);

//limit
if (distance >255){
  analogWrite(led,255);
}
if (distance <0){
  analogWrite(led,0);
}
}