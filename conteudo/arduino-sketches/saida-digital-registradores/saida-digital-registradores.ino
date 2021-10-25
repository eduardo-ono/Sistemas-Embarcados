const short port = B00000001;

void setup() {
  DDRB = port;
}

void loop() {
    PORTB |= port;
    PORTB &= ~port;
}
