#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);  //16 Zeichen, 2 Zeilen
}

void loop() {
  lcd.setCursor(0,0); //Position Zeichen 0, Zeile 0
  lcd.print("Willkommen bei");
  lcd.setCursor(0,1);
  lcd.print("meiner vollautomatischen Displayausgabe");
}
