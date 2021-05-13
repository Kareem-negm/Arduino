void setup() {
  pinMode((2,7,8),OUTPUT);
   
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(2,HIGH);
  delay(4000);
  
  digitalWrite(2,LOW);
  delay(3000);
  digitalWrite(7,HIGH);
  delay(4000);
  
  digitalWrite(7,LOW);
  delay(3000);
 digitalWrite(8,HIGH);
  delay(4000);
  
  digitalWrite(8,LOW);
  delay(3000);
 
  
  // put your main code here, to run repeatedly:

}
