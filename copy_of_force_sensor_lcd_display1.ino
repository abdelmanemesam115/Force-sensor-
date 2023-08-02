#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
int  essam=0;
int force = 0;
void setup()
{
  lcd.begin(16, 2); 
  pinMode(A0, INPUT);
  Serial.begin(9600);
   lcd.print(essam);
delay(1000);
  //😢 بشمهندس مش راضي يكتب اسمي 
}

void loop()
{
  force = analogRead(A0);
  Serial.println(force);
  lcd.clear();
 
  lcd.print(force);
delay(1000);
}
