int potPin = A0;
int ledPin = 13;
int val;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(potPin, INPUT);
}
void loop() {
val = analogRead(potPin);
digitalWrite(ledPin, HIGH);
delay(val);
digitalWrite(ledPin, LOW);
delay(val);
}
