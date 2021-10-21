#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(A4, OUTPUT);
  Wire.begin();
  Wire.beginTransmission(0x20);
  Wire.write(0b11110000);
  Wire.endTransmission();
}

void loop() {
  // put your main code here, to run repeatedly:

}
