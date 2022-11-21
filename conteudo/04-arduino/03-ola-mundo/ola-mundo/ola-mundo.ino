short ledPin = 13;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  DDRB = 0b00100000; // pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  analogWrite(3, 127);
}

void loop() {
  // put your main code here, to run repeatedly:
  // PORTB |= 0b00100000; // digitalWrite(ledPin, HIGH);
  // delay(delay_time);
  // PORTB &= ~0b00100000; // digitalWrite(ledPin, LOW);
  // delay(delay_time);
}
