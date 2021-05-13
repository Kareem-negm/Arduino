
void setup() {
  // put your setup code here, to run once:
   pinMode(10,INPUT);
 pinMode((11,12,13),OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  int sen = digitalRead(10);

     digitalWrite(12,sen);
    digitalWrite(13,sen);
      digitalWrite(11,sen);

  
  /*
  if(sen==1){
     digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
      digitalWrite(11,HIGH);
        //digitalWrite(12,HIGH);
   // delay(3000);
  }
  else {
    digitalWrite(11,LOW);
    digitalWrite(13,LOW);
   // digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    */
  //}
 

}
