const int motor = 7;
int vSpeed;
int state;

void setup() 
{
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
if(Serial.available() >0)
  {
    state = Serial.read();
  }
   if (state == '0'){
      vSpeed=0;}
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
  analogWrite(motor,vSpeed);
}
}
