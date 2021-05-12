 
const int ledPin = 13;
 
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  static int cont = 0;
  piscarLed();
  Serial.println(cont);
  cont++;
  if (cont % 1000 == 0)
    cont = 0;
}

void piscarLed()
{
  const int delay_ms = 500;
  digitalWrite(ledPin, HIGH);
  delay(delay_ms);
  digitalWrite(ledPin, LOW);
  delay(delay_ms);
}

/*
void piscarLedMultiTask()
{
  static bool estadoLed = HIGH;
  static unsigned long delay_ms = 0;
  
  unsigned long delta = millis() - delay_ms;
  if (millis() - delay_ms > 100)
  {
    digitalWrite(ledPin, estadoLed);
    estadoLed = !estadoLed;
    delay_ms = millis();
  }
}
*/
