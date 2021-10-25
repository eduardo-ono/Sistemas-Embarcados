const short pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  analogWrite(pin, 51); // Resolução do PWM = 8-bit no Arduino Uno
}

void loop() {
  // put your main code here, to run repeatedly
}
