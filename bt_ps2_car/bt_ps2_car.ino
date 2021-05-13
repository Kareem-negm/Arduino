#include <PS2X_lib.h>  //for v1.6
int vSpeed;
int state;
int motora1=3;
int motora2=5;
int motorb1=9;
int motorb2=10;
#define PS2_DAT        13  //14    
#define PS2_CMD        12  //15
#define PS2_SEL        11  //16
#define PS2_CLK        8  //17

#define pressures   false
#define rumble      false

PS2X ps2x; 

int error = 0;
byte type = 0;
byte vibrate = 0;

void setup(){
  Serial.begin(9600);
  delay(300);
  pinMode(motora1,OUTPUT);
  pinMode(motora2,OUTPUT);
  pinMode(motorb1,OUTPUT);
  pinMode(motorb2,OUTPUT);

  error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);
  
  if(error == 0){
  
  type = ps2x.readType(); 
}
}

void loop() {
if(Serial.available() >0)
  {
    state = Serial.read();
  }
   if (state == '0'){
      vSpeed=0; }
    else if (state == '1'){
      vSpeed=25;}
    else if (state == '2'){
      vSpeed=50;}
    else if (state == '3'){
      vSpeed=75;}
    else if (state == '4'){
      vSpeed=100;}
    else if (state == '5'){
      vSpeed=125;}
    else if (state == '6'){
      vSpeed=150;}
    else if (state == '7'){
      vSpeed=175;}
    else if (state == '8'){
      vSpeed=200;}
    else if (state == '9'){
      vSpeed=225;}
    else if (state == 'q'){
      vSpeed=255;}


if(state=='F')
{
  analogWrite(motora1, vSpeed);
  analogWrite(motorb1, vSpeed);
  analogWrite(motora2, 0);
  analogWrite(motorb2, 0);
}
else if(state=='B')
{
  analogWrite(motora1, 0);
  analogWrite(motorb1, 0);
  analogWrite(motora2, vSpeed);
  analogWrite(motorb2, vSpeed);
}
else if(state=='R')
{
  analogWrite(motora1, 0);
  analogWrite(motorb1, vSpeed);
  analogWrite(motora2, vSpeed);
  analogWrite(motorb2, 0);  
}
else if(state=='L')
{
  analogWrite(motora1, vSpeed);
  analogWrite(motorb1, 0);
  analogWrite(motora2, 0);
  analogWrite(motorb2, vSpeed);  
}
else if(state == 'S')
{
  analogWrite(motora1, 0);
  analogWrite(motorb1, 0);
  analogWrite(motora2, 0);
  analogWrite(motorb2, 0);  
}  
    ps2x.read_gamepad(false, vibrate);
    
    if (ps2x.Button(PSB_PAD_UP)) {    
      digitalWrite(motora1,HIGH);
      digitalWrite(motorb1,HIGH);
      digitalWrite(motora2,LOW);
      digitalWrite(motorb2,LOW);
    }
  else  if(ps2x.Button(PSB_PAD_RIGHT)){
      digitalWrite(motora1,LOW);
      digitalWrite(motorb1,HIGH);
      digitalWrite(motora2,HIGH);
      digitalWrite(motorb2,LOW);
    }
   else if(ps2x.Button(PSB_PAD_LEFT)){
      digitalWrite(motora1,HIGH);
      digitalWrite(motorb1,LOW);
      digitalWrite(motora2,LOW);
      digitalWrite(motorb2,HIGH);
    }
   else if(ps2x.Button(PSB_PAD_DOWN)){
      digitalWrite(motora1,LOW);
      digitalWrite(motorb1,LOW);
      digitalWrite(motora2,HIGH);
      digitalWrite(motorb2,HIGH);
    }
   else if(ps2x.Button(PSB_CROSS)){
      digitalWrite(motora1,LOW);
      digitalWrite(motorb1,LOW);
      digitalWrite(motora2,LOW);
      digitalWrite(motorb2,LOW);
    }
    else{
      digitalWrite(motora1,LOW);
      digitalWrite(motorb1,LOW);
      digitalWrite(motora2,LOW);
      digitalWrite(motorb2,LOW);
    }
    
  delay(30);
}
