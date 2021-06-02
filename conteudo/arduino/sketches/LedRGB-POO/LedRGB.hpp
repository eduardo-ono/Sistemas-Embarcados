#ifndef LedRGB_hpp
#define LedRGB_hpp

#include <Arduino.h>

class LedRGB {
private:
  byte rPin;
  byte gPin;
  byte bPin;
  int r = 0;
  int g = 0;
  int b = 0;

public:
  // Construtor
  LedRGB(int, int, int);

  // Destrutor
  ~LedRGB();

  // Métodos
  void on();
  void off();
};

#endif
