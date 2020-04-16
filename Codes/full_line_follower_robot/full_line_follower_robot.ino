const byte lsens=2;
const byte msens=3;
const byte rsens=4;
const byte in1=5;
const byte in2=6;
const byte in3=9;
const byte in4=10;

void setup()
{
  pinMode (lsens,INPUT);
  pinMode (msens,INPUT);
  pinMode (rsens,INPUT);
  pinMode (in1,OUTPUT);
  pinMode (in2,OUTPUT);
  pinMode (in3,OUTPUT);
  pinMode (in4,OUTPUT); 
} 

void loop()
{
 if (!digitalRead(lsens) && digitalRead(msens) && !digitalRead(rsens))
 {
  analogWrite(in1,0);
  analogWrite(in2,140);
  analogWrite(in3,0);
  analogWrite(in4,140);
 }
 else if (digitalRead(lsens) && !digitalRead(rsens))
 {
  analogWrite(in1,0);
  analogWrite(in2,50);
  analogWrite(in3,0);
  analogWrite(in4,255);
 }
 else if (!digitalRead(lsens) && digitalRead(rsens))
 {
  analogWrite(in1,0);
  analogWrite(in2,255);
  analogWrite(in3,50);
  analogWrite(in4,0);
 }
 else if (digitalRead(lsens) && digitalRead(msens) && digitalRead(rsens))
 {
  analogWrite(in1,0);
  analogWrite(in2,0);
  analogWrite(in3,0);
  analogWrite(in4,0);
 }
  else if (!digitalRead(lsens) && !digitalRead(msens) && !digitalRead(rsens))
 {
  analogWrite(in1,85);
  analogWrite(in2,0);
  analogWrite(in3,35);
  analogWrite(in4,0);
 }
}
