int led1 = 4 ;

int pass = 12;
int inppin=A0;
int sens =0;
void setup() {
  pinMode(led1, OUTPUT);
    pinMode(pass, OUTPUT);
 // pinMode(led2, OUTPUT);
 // pinMode(led3, OUTPUT);

  pinMode(inppin, INPUT);
Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  sens = analogRead(inppin);
  // digitalWrite(led2 , LOW);
   digitalWrite(led1 , LOW );
  // digitalWrite(led3 , LOW);
   digitalWrite(pass , LOW);
   
if(sens >=500)
{    // Serial.print("there is a strong fire = ");
     // Serial.println(sens);
   digitalWrite(pass , HIGH );
   digitalWrite(led1 , HIGH );
   delay(1000);
   digitalWrite(pass , LOW );
   digitalWrite(led1 , LOW );
   delay(100);
      Serial.print("there is a strong fire ");
      Serial.println(sens);

  //    digitalWrite(led2 , LOW);
  // digitalWrite(led3 , LOW);

   //لاوم يكون الباقي متعرفكلو 
   
}

//if(sens <800 and sens>=500)
//{    // Serial.print("there is a strong fire = ");
     // Serial.println(sens);
 //  digitalWrite(pass , HIGH );
  // digitalWrite(led2 , HIGH );
   //delay(1000);
   //digitalWrite(pass , LOW );
   //digitalWrite(led2 , LOW );
   //delay(100);
     // digitalWrite(led1, LOW);
   //digitalWrite(led3 , LOW);



if(sens <= 499){    
  Serial.println("evry thing is good ");
Serial.println(sens);
delay(1000);
      //Serial.println(sens);
   digitalWrite(pass , 0);
//   digitalWrite(led3 , 0 );
  // delay(1000);
  // digitalWrite(pass , LOW );
 //  digitalWrite(led3 , LOW );
 //  delay(100);
    //  digitalWrite(led1 , LOW);
  // digitalWrite(led2 , LOW);

}

}
