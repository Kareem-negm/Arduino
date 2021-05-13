int t;
 int led =9;
 int sond = 2 ;
 int back_led = 3;
 int extra =4;
void setup() {
pinMode(13,OUTPUT);   
pinMode(12,OUTPUT);   
pinMode(11,OUTPUT);   
pinMode(10,OUTPUT);   
pinMode(led,OUTPUT);  
pinMode(sond,OUTPUT);   
pinMode(back_led,OUTPUT);   
pinMode(extra,OUTPUT);   



Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      
  digitalWrite(11,HIGH);
}
 
else if(t == 'R'){     
  digitalWrite(13,HIGH);
}

else if(t == 'W'){   
  digitalWrite(led,HIGH);
}
else if(t == 'w'){
  digitalWrite(led,LOW);
}
 
else if(t == 'V'){   
  digitalWrite(sond,HIGH);
}
else if(t == 'v'){
  digitalWrite(sond,LOW);
}

else if(t == 'U'){   
  digitalWrite(back_led,HIGH);
}
else if(t == 'u'){
  digitalWrite(back_led,LOW);
}

else if(t == 'X'){   
  digitalWrite(extra,HIGH);
}
else if(t == 'x'){
  digitalWrite(extra,LOW);
}
else if(t == 'S'){     
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}
