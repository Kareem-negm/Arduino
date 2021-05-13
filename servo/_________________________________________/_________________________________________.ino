
#include <Servo.h>
Servo myservo; 
int state =0;
int pos;
void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}
void loop() {
if(Serial.available() > 0)
{
  state = Serial.read();
}
if(state == 'r')
{
  pos = pos +1;
      myservo.write(pos);              

}

if(state == 'l')
{
    pos = pos -1;

      myservo.write(15);              

}
}
