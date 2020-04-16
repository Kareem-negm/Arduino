#include <Servo.h>
Servo myservo;  
int potpin = A0;  
int val;    
void setup() {
  myservo.attach(9); 
  pinMode(potpin,INPUT); 
}
void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 5, 175);    
  myservo.write(val);                  
  delay(15);                           
}
