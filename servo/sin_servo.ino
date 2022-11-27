#include <Servo.h>

Servo myservo; 

const int serpin = 9 //the pin to connect the servos'signal pin

int pos = 0;    

void setup() {
  myservo.attach(serpin); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); 
} 

void loop() {
    for (int angle = -180; angle <= 0; angle += 1) {
    float angle_rad = angle * M_PI / 180;
    int sin_result = int((sin(angle_rad)+1)*90);
    myservo.write(sin_result);  // tell servo to go to position in variable 'sin_result' 
    delay(15); // wait for servo to reach its position          
    Serial.println(sin_result); // prints the result to the Serial Monitor
    
  }
  for (int angle = 180; angle >= 0; angle -= 1) {
    float angle_rad = angle * M_PI / 180;
    int sin_result = int((sin(angle_rad)+1)*90) ;
    myservo.write(sin_result); // tell servo to go to position in variable 'sin_result'
    delay(15); // wait for servo to reach its position
    Serial.println(sin_result); // prints the result to the Serial Monitor
  }
  
}
