
#include <PS2X_lib.h>  
#define PS2_DAT        13  
#define PS2_CMD        12  
#define PS2_SEL        11  
#define PS2_CLK        8  
//Motor A
const int motorPin1  = 10; 
const int motorPin2  = 9; 
//Motor B
const int motorPin3  = 5; 
const int motorPin4  =3;
int EnableA =4 ;
int EnableB =6 ;
#define pressures   false
#define rumble      false

PS2X ps2x; 

int error = 0;
byte type = 0;
byte vibrate = 0;

void setup(){
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);
   pinMode(EnableA, OUTPUT);
   pinMode(EnableB, OUTPUT);
   digitalWrite(EnableA,HIGH);
   digitalWrite(EnableB,HIGH);
  Serial.begin(9600);
  delay(300);
  error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);
}

void loop() { 
    ps2x.read_gamepad(false, vibrate);
      digitalWrite(motorPin1, 0);
      digitalWrite(motorPin2, 0);
      digitalWrite(motorPin3, 0);
      digitalWrite(motorPin4, 0); 
    if(ps2x.Button(PSB_START))     
      Serial.println("Start is being held");
    if(ps2x.Button(PSB_SELECT))
      Serial.println("Select is being held");      

    if (ps2x.Button(PSB_PAD_UP)) {   
      Serial.print("Up held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_UP), DEC);
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, 0);
      digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin4, 0);      
      
    }
    if(ps2x.Button(PSB_PAD_RIGHT)){
      Serial.print("Right held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_RIGHT), DEC);
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, 0);
      digitalWrite(motorPin3, 0);
      digitalWrite(motorPin4, HIGH);
      
    }
    if(ps2x.Button(PSB_PAD_LEFT)){
      Serial.print("LEFT held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_LEFT), DEC);
      digitalWrite(motorPin1, 0);
      digitalWrite(motorPin2, HIGH);
      digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin4, 0);
    }
    if(ps2x.Button(PSB_PAD_DOWN)){
      Serial.print("DOWN held this hard: ");
      Serial.println(ps2x.Analog(PSAB_PAD_DOWN), DEC);
      digitalWrite(motorPin1, 0);
      digitalWrite(motorPin2, HIGH);
      digitalWrite(motorPin3, 0);
      digitalWrite(motorPin4, HIGH); 
      
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
      }     
    

    if(ps2x.Button(PSB_CIRCLE))     {          //will be TRUE if button was JUST pressed
      Serial.println("Circle just pressed");
    }
    if(ps2x.Button(PSB_CROSS)) {              //will be TRUE if button was JUST pressed OR released
      Serial.println("X just changed");
    }
    if(ps2x.Button(PSB_SQUARE)) {             //will be TRUE if button was JUST released
      Serial.println("Square just released"); 
    } 
 
  
  delay(15);
  
}
