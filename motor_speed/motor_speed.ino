int m=11;
int state;
int vSpeed;
void setup() {
pinMode(m,OUTPUT);
Serial.begin(9600);
}

void loop() {
if(Serial.available() > 0)
{
  state = Serial.read();
}
if(state == '0')
{
  vSpeed=0;
}
if(state == '1')
{
  vSpeed=25;
}
if(state == '2')
{
  vSpeed=50;
}
if(state == '3')
{
  vSpeed=75;
}
if(state == '4')
{
  vSpeed=100;
}
if(state == '5')
{
  vSpeed=125;
}
if(state == '6')
{
  vSpeed=150;
}
if(state == '7')
{
  vSpeed=175;
}
if(state == '8')
{
  vSpeed=200;
}
if(state == '9')
{
  vSpeed=225;
}
if(state == 'q')
{
  vSpeed=255;
}
if(state=='F')
{
  analogWrite(m,vSpeed);
}
}
