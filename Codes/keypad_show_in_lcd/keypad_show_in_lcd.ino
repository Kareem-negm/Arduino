#include <Keypad.h>
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const byte numRows= 4;
const byte numCols= 4;
char keymap[numRows][numCols]={
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};
byte rowPins[numRows] = {9,8,7,6};
byte colPins[numCols]= {5,4,3,2};
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);
void setup(){
  lcd.begin(16, 2) ;
  Serial.begin(9600);}
void loop(){
  char keypressed = myKeypad.getKey();
  if (keypressed != NO_KEY){
      lcd.print(keypressed);}}
