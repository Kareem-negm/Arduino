#include <Keypad.h>
#include <Servo.h>
const byte rows = 4; //four rows since the keypad is full
const byte columns = 4; //four columns, same as above
char buttons[rows][columns] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte rowP[rows] = {13, 12, 11, 10}; //row pins of the keypad
byte columnsP[columns] = {9, 8, 7, 6}; //column pins of the keypad
Keypad pad = Keypad( makeKeymap(buttons), rowP, columnsP, rows, columns ); //create keypad
Servo myServo; //
void setup(){
Serial.begin(9600);
myServo.attach(3); // attaches the servo on pin 9 to the servo object
}
void loop(){
char key = pad.getKey(); //get the char from the keypad
if(key == '0')
{
myServo.write(5);
Serial.println("0");
delay(15);
}
if(key == '1')
{
myServo.write(12);
Serial.println("1");
delay(15);
}
if(key == '2')
{
myServo.write(24);
Serial.println("2");
delay(15);
}
if(key == '3')
{
myServo.write(36);
Serial.println("3");
delay(15);
}
if(key == '4')
{
myServo.write(48);
Serial.println("4");
delay(15);
}
if(key == '5')
{
myServo.write(60);
Serial.println("5");
delay(15);
}
if(key == '6')
{
myServo.write(72);
Serial.println("6");
delay(15);
}
if(key == '7')
{
myServo.write(100);
Serial.println("7");
delay(15);
}
if(key == '8')
{
myServo.write(96);
Serial.println("8");
delay(15);
}
if(key == '9')
{
myServo.write(108);
Serial.println("9");
delay(15);
}
if(key == '*')
{
myServo.write(120);
Serial.println("*");
delay(15);
}
if(key == '#')
{
myServo.write(132);
Serial.println("#");
delay(15);
}
if(key == 'A')
{
myServo.write(146);
Serial.println("A");
delay(15);
}
if(key == 'B')
{
myServo.write(158);
Serial.println("B");
delay(15);
}
if(key == 'C')
{
myServo.write(170);
Serial.println("C");
delay(15);
}
if(key == 'D')
{
myServo.write(180);
Serial.println("D");
delay(15);
}
}
