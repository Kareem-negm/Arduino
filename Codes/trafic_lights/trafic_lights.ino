int red = 13;
int green = 12;
int yellow = 11;
void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
}
void loop (){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(3000);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  delay(3000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);
}
