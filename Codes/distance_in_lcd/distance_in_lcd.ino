#include <LiquidCrystal.h>
int trigpin = 9;
int echopin = 10;
long distance ;
int duration ;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup()   {
  lcd.begin(16, 2) ;
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  lcd.print("ENG.MUBARAK!");
  Serial.begin(9600) ;
}
void loop()   {
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.034/2;
  Serial.println(distance);
  lcd.setCursor(0, 1) ;
  lcd.print("Distance=");
  lcd.print(distance);
  lcd.print(" ")  ;
   lcd.print("cm");
   lcd.print(" ") ;
   delay(100) ;
}
