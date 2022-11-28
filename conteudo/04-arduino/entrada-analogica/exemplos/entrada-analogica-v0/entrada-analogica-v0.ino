#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 9, 5, 4, 3, 2);

void setup() {
    pinMode(A0, INPUT);
}

void loop() {
    lcd.clear();
    lcd.setCursor(0, 0);
    int entrada = analogRead(A0);
    lcd.print("Entrada = ");
    lcd.print(entrada);
    delay(100);
}
