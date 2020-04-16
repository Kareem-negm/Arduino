int led = 13;
int state;
void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600); }
void loop() {
 if(Serial.available() >0)
  {
    state = Serial.read();
  }
  if(state == 'F')
  {              digitalWrite(led, HIGH); }
   else if (state=='B'){
                 digitalWrite(led, LOW); }
          }
