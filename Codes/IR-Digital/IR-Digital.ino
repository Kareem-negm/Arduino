int led=13;
int sensorpin=7;
int sensorval=LOW;
void setup() {
pinMode(led,OUTPUT);
pinMode(sensorpin,INPUT);
}

void loop() {
sensorval=digitalRead(sensorpin);
if(sensorval==HIGH){
  digitalWrite(led,LOW);
}
else{
  digitalWrite(led,HIGH);
}
}
