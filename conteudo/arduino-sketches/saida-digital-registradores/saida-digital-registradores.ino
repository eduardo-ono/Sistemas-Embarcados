void setup() {
  // put your setup code here, to run once:
  DDRD = 0x00000100;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD |= 0x00000100;
  PORTD &= ~0x00000100;
}
