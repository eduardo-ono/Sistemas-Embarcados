<h1 align="center">API do Arduino</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

## Programa Pisca LED no Arduino UNO

### Programação em C++ "Nativo"

```cpp
void setup() {
    // Configura pinos de uma porta como entrada (0) ou saída (1).
    DDRB = 0b000100000;
}

void loop() {
    // Liga o LED interno associado ao pino 13 (B5).
    PORTB |= 0b000100000;
    delay(1000); // Delay em milisegundos
    // Desliga o LED interno associado ao pino 13 (B5).
    PORTB &= ~0b00010000;
    delay(1000);
}
```

### API do Arduino

```cpp
void setup() {
    const short int ledPin = 13;
    // Configura um pino como entrada (INPUT) ou saída (OUTPUT).
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Liga o LED do pino 13.
    digitalWrite(ledPin, HIGH);
    delay(1000); // Delay em milisegundos
    // Desliga o LED do pino 13.
    digitalWrite(ledPin, LOW);
    delay(1000);
}
```
