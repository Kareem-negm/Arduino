#include <Servo.h>
Servo myservo;
int r,l,f;

const int trigPin = 6;
const int echoPin = 5;
const int IN1 = 8;
const int IN2 = 13;
const int IN3 = 12;
const int IN4 = 11;
const int ENA = 9 ;
const int ENB = 10 ;
unsigned long duration, inches, cm;

void setup() {
 myservo.attach(7);
Serial.begin(9600);

 
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 pinMode(ENA,OUTPUT);
 pinMode(ENB,OUTPUT);

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

}

void loop() {
myservo.write(90);
 
dis();


 if(cm > 40){
 
  forward();
 }

 else{
    Stop();
    pos();
    if(f > r and f>l and f >70) forward();
    else if (r>l and r>f and r>30){
      right();
      delay(400);
    }
    else if (l>r and l>f and l>30){
      left();
      delay(600);
    }
    else{
      backward();
      delay(400);
      Stop();
      delay(150);
    }
 }
  

}


void forward(){
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(ENA,150);
 digitalWrite(ENB,150);
 
  }
  
void backward(){
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 digitalWrite(ENA,150);
 digitalWrite(ENB,150);

} 

void Stop(){
  
 digitalWrite(ENA,LOW);
 digitalWrite(ENB,LOW);
}

void right(){
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(ENA,HIGH);
 digitalWrite(ENB,70);
}

void left(){
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(ENA,70);
 digitalWrite(ENB,HIGH);
}


void pos(){
  dis();
  f = cm;
  delay(100);
  myservo.write(10);
  delay(1500);
  dis();
  r = cm ;
  myservo.write(170);
  delay(1500);
  dis();
  l = cm ;
  myservo.write(90);
  delay(1000);
  
}

void dis(){
digitalWrite(trigPin, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
cm = microsecondsToCentimeters(duration);
delay(100); 

}

long microsecondsToCentimeters(long microseconds)
{ 
  return microseconds / 29 / 2; 
}
