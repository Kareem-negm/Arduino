#include <PS2X_lib.h>
#include <Servo.h>
Servo x;
PS2X ps2x; 

int error = 0; 
byte type = 0;    

int posx;
void setup(){
 Serial.begin(9600);
  x.attach(5);
 error = ps2x.config_gamepad(8,9,10,13, true, true);   //setup pins and settings:  GamePad(clock, command, attention, data, Pressures?, Rumble?) check for error
   
   type = ps2x.readType(); 
     switch(type) {
     }
  
}

void loop()
{

  
  if (ps2x.Button(PSB_PAD_UP)) {
    posx=posx-1;
      delay(15);
      x.write(posx);
      Serial.println("up");
  } else {

  }
  
  if (ps2x.Button(PSB_PAD_DOWN)) {
      posx=posx+1;
      delay(15);
      x.write(posx);
      Serial.println("down");
    
  } else {
  
  }
  
  if (ps2x.Button(PSB_PAD_RIGHT)) {
    
  } else {
  
  }
  
  if (ps2x.Button(PSB_PAD_LEFT)) {
   
  } else {
   
  }
 
 delay(5);
     



}
