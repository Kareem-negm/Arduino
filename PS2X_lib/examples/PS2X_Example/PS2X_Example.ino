#include <PS2X_lib.h>  //for v1.6
int led = 13;
#define PS2_DAT        9  //14    
#define PS2_CMD        10  //15
#define PS2_SEL        11  //16
#define PS2_CLK        12  //17

#define pressures   false
#define rumble      false

PS2X ps2x; 

int error = 0;
byte type = 0;
byte vibrate = 0;

void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  delay(300);
  error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);
  
  if(error == 0){
  
  type = ps2x.readType(); 
}
}

void loop() {
  if(error == 1)
    return; 
  
  if(type == 2)
  { 
    ps2x.read_gamepad();
    }

  else { 
    ps2x.read_gamepad(false, vibrate);
    
    if(ps2x.Button(PSB_START))     
      Serial.println("Start is being held");
    if(ps2x.Button(PSB_SELECT))
      Serial.println("Select is being held");      

    if (ps2x.Button(PSB_PAD_UP)) {   
      Serial.print("Up held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_UP), DEC);
      
    }
    if(ps2x.Button(PSB_PAD_RIGHT)){
      Serial.print("Right held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_RIGHT), DEC);
    }
    if(ps2x.Button(PSB_PAD_LEFT)){
      Serial.print("LEFT held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_LEFT), DEC);
    }
    if(ps2x.Button(PSB_PAD_DOWN)){
      Serial.print("DOWN held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_DOWN), DEC);
      
    }   
      if(ps2x.Button(PSB_L1)){
          Serial.println("L1 pressed ");
      }
      if(ps2x.Button(PSB_L2)){
        Serial.println("L2 pressed");
      }
       if(ps2x.Button(PSB_R1)){
          Serial.println("R1 pressed ");
      }
      if(ps2x.Button(PSB_R2)){
        Serial.println("R2 pressed");
      }
      if(ps2x.Button(PSB_TRIANGLE)){
        Serial.println("Triangle pressed"); 
        digitalWrite(led,LOW); 
      }     
    

    if(ps2x.Button(PSB_CIRCLE))     {          //will be TRUE if button was JUST pressed
      Serial.println("Circle just pressed");
      digitalWrite(led,LOW);
    }
    if(ps2x.Button(PSB_CROSS)) {              //will be TRUE if button was JUST pressed OR released
      Serial.println("X just changed");
      digitalWrite(led,HIGH);
    }
    if(ps2x.Button(PSB_SQUARE)) {             //will be TRUE if button was JUST released
      Serial.println("Square just released"); 
      digitalWrite(led,HIGH);   
    } 
  }
  delay(15);
  
}
