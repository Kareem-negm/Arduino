#include <Servo.h>
Servo myservo; 
int val;    
int state;
void setup() {
  myservo.attach(9);  
  Serial.begin(9600); 
}
void loop() {
 if(Serial.available() >0)
  {
    state = Serial.read();
    }
  if(state == 'R' ){
    val = val+1;
    myservo.write(val);                  
    delay(15);
    Serial.println("R");
    }
  else if (state == 'L' ) {
    val = val-1;
    myservo.write(val);                  
    delay(15);
    Serial.println("L");

    }
}
