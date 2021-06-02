#include "LedRGB.hpp"

LedRGB led1(12, 11, 10); // led1 criado na "stack", padrão na programação do Arduino
LedRGB *led2 = new LedRGB(2, 3, 4); // led2 criado no "heap"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  led1.on();
  delay(1000);
  led1.off();
  delay(1000);
  led2->on();
  delay(0);
  led2->off();
  delay(0);
}
