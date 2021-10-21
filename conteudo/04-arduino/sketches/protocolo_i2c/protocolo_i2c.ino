#include <Wire.h>

void setup() {
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(0x20);
  Wire.write(0b11110000);
  Wire.endTransmission();
  delay(1000);
  Wire.beginTransmission(0x20);
  Wire.write(0b00000000); // Desliga tudo (do 0x20)
  Wire.endTransmission();
  Wire.beginTransmission(0x21);
  Wire.write(0b01010101);
  Wire.endTransmission();
  delay(1000);
  Wire.beginTransmission(0x21);
  Wire.write(0b00000000); // Desliga tudo (do 0x21)
  Wire.endTransmission();
}
