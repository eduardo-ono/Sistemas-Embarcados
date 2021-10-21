#ifndef LedRGB_hpp
#define LedRGB_hpp

#include <Arduino.h>

class LedRGB {
private:
  byte rPin;
  byte gPin;
  byte bPin;
  int r = 0; // valor entre 0 e 255 (PWM 8-bit)
  int g = 0;
  int b = 0;

public:
  // Construtor
  LedRGB(byte, byte, byte);

  // Destrutor
  ~LedRGB();

  // Métodos
  void on();
  void off();
};

#endif
