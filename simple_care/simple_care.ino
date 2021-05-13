const int trigPin = A0;
const int echoPin = A1;
const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;
const int ENA = 9 ;
const int ENB = 3 ;

void setup() {
 Serial.begin(9600);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 pinMode(ENA,OUTPUT);
 pinMode(ENB,OUTPUT);


}

void loop() {
 long duration, inches, cm; 
pinMode(trigPin, OUTPUT);
digitalWrite(trigPin, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
cm = microsecondsToCentimeters(duration);
    Serial.println(cm);
    delay(100);


if(cm > 35){
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 digitalWrite(ENA,HIGH);
 digitalWrite(ENB,HIGH);
 
}

if(cm <= 35 and cm >= 17){
 delay(150);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(ENA,HIGH);
 digitalWrite(ENB,HIGH);
 
}

if(cm < 20){
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(ENA,HIGH);
 digitalWrite(ENB,HIGH);
 

 delay(100);  
}
}

long microsecondsToCentimeters(long microseconds)
{ 
  return microseconds / 29 / 2; 
}
