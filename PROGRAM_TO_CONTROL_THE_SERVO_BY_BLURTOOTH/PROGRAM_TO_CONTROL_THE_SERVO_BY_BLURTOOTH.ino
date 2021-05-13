
#include <Servo.h>
Servo myservo; 
int state;

void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}
void loop() {
if(Serial.available() > 0)
{
  state = Serial.read();
}
if(state == '0')
{
      myservo.write(0);              

}
}
if(state == '1')
{
      myservo.write(15);              

}
if(state == '2')
{
   myservo.write(30);
}
if(state == '3')
{
   myservo.write(45);
}
if(state == '4')
{
   myservo.write(60);
}
if(state == '5')
{
  myservo.write(75);
}
if(state == '6')
{
   myservo.write(90);;
}
if(state == '7')
{
   myservo.write(105);
}
if(state == '8')
{
 myservo.write(130);
 }
if(state == '9')
{
 myservo.write(150);
 }
if(state == 'q')
{
 myservo.write(175);
 }
 }
 
 
