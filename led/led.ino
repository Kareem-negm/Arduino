/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
int swichpin = A0 ;
const int servopin = 9 ;

Servo servo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  pinMode(swichpin , INPUT );
  servo.attach(servopin);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int X = analogRead(swichpin);
  
  if (X < 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(30);              // tell servo to go to position in variable 'pos'
                         // waits 15ms for the servo to reach the position
  }
  if (X > 5) { 
    // goes from 180 degrees to 0 degrees
    servo.write(90);              // tell servo to go to position in variable 'pos'
                           // waits 15ms for the servo to reach the position
  }

  Serial.println(X);
  delay(1);
}
