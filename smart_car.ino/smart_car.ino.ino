const int inf1 = 9;
//const int inf2 = 11;
int led = 13;
int deg ;
void setup() {
pinMode(inf1,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {

  deg=digitalRead(inf1);
Serial.println(deg);
Serial.print(" _ ");
//Serial.println(digitalRead(inf2));
delay(1000);
digitalWrite(led,deg);

}
