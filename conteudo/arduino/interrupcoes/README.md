> ### Sistemas Embarcados > Conteúdo > Arduino

# Interrupções no Arduino

Prof. Eduardo Ono

<br>

## Code

```cpp
const int ledPin = 13;

pinMode(ledPin, OUTPUT);

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}

```

