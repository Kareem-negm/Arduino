int led = 13;
int sensorpin = A0;
int sensorval;

void setup(){
    pinMode(led, OUTPUT);
    pinMode(sensorpin, INPUT);
    Serial.begin(9600);
}
void loop(){
    sensorval = analogRead(sensorpin);
    Serial.print("sensorval = ");
    Serial.println(sensorval);
    if(sensorval < 500){
    digitalWrite(led, HIGH);
}
    else{
    digitalWrite(led, LOW);
}
}
