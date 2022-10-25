const int echo = 4;
const int trig = 5;
const int led = 5;
float distance,duration;

void setup(){
 Serial.begin(9600);
 pinMode(echo, INPUT);
 pinMode(trig, OUTPUT);
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig , LOW);
delayMicroseconds(2);
digitalWrite(trig , HIGH);
delayMicroseconds(10);
digitalWrite(trig , LOW);
noInterrupts();
duration = pulseIn(echo , HIGH);
interrupts();

distance = (duration/2) * 0.034;
//(duration/2) * 0.034;
Serial.print(distance );
Serial.println(" cm");
=======
void loop(){
 
if(distance<25){
digitalWrite(led , HIGH);
;
}

if(distance>25){
digitalWrite(led , LOW);

}
}
