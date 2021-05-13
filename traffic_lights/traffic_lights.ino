int red = 8;
int yel = 9;
int gre = 10;
void setup() {
 pinMode(red,OUTPUT);
 pinMode(yel,OUTPUT);
 pinMode(gre,OUTPUT);

}

void loop() {
  
digitalWrite(red,1);
delay(3000);
digitalWrite(red,0);

digitalWrite(yel,1);
delay(3000);
digitalWrite(yel,0);

digitalWrite(gre,1);
delay(3000);
digitalWrite(gre ,0);


}
