#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 9, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2); // (colunas, linhas)
}

void loop() {
    lcd.clear();
    lcd.setCursor(3, 0);
    String str = "Ola mundo!";
    // strcpy(str, "Ola mundo!");
    lcd.print(str);
    delay(2000);

    // Rolagem para a esquerda
    for (int posicao = 0; posicao < 3; posicao++)
    {
        lcd.scrollDisplayLeft();
        delay(300);
    }
    
    // Rolagem para a direita
    for (int posicao = 0; posicao < 6; posicao++)
    {
        lcd.scrollDisplayRight();
        delay(300);
    }
}
