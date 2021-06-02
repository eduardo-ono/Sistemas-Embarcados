#include "LedRGB.hpp"

// Construtor
LedRGB::LedRGB(int rPin, int gPin, int bPin)
{
  this->rPin = rPin;
  this->gPin = gPin;
  this->bPin = bPin;
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

// Destrutor
LedRGB::~LedRGB()
{
}

void LedRGB::on()
{
  digitalWrite(rPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(bPin, HIGH);
}

void LedRGB::off()
{
  digitalWrite(rPin, LOW);
  digitalWrite(gPin, LOW);
  digitalWrite(bPin, LOW);
}
