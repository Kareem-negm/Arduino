#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int trigPin = 10;
const int echoPin = 9; 
int duration; 
int distance;
void setup () {
  lcd.begin(2,16) ; 
lcd.print("THE DISTAANCE IS");
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600) ; 
} 
void loop () {
digitalWrite(trigPin, LOW);
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2; 

  lcd.print("distance =");
  lcd.println(distance) ;
  }
