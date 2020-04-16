//Motor A
const int motorPin1  = 10; 
const int motorPin2  = 9; 
//Motor B
const int motorPin3  = 5; 
const int motorPin4  = 3; 
int vSpeed;
int state;
int FL = 13;
int BL = 12;
int HO = 11;
int EX = 8;
void setup() 
{
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorPin3, OUTPUT);
   pinMode(motorPin4, OUTPUT);
   pinMode(FL,OUTPUT);
   pinMode(BL,OUTPUT);
   pinMode(HO,OUTPUT);
   pinMode(EX,OUTPUT);   
  Serial.begin(9600);
}

void loop()
{
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
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, vSpeed);
  analogWrite(motorPin4, 0);
}
else if(state=='B')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);
}
else if(state=='R')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, vSpeed);
  analogWrite(motorPin3, vSpeed);
  analogWrite(motorPin4, 0);  
}
else if(state=='L')
{
  analogWrite(motorPin1, vSpeed);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, vSpeed);  
}
else if(state == 'S')
{
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);  
}
else if(state=='W')
{
  digitalWrite(FL,HIGH);
}
else if(state=='w')
{
  digitalWrite(FL,LOW);
  
}
else if(state=='U')
{
  digitalWrite(BL,HIGH);
}
else if(state=='u')
{
  digitalWrite(BL,LOW);
}
else if(state=='V')
{
  digitalWrite(HO,HIGH);
}
else if(state=='v')
{
  digitalWrite(HO,LOW);
}
else if(state=='X')
{
  digitalWrite(EX,HIGH);
}
else if(state=='x')
{
  digitalWrite(EX,LOW);
}
}
