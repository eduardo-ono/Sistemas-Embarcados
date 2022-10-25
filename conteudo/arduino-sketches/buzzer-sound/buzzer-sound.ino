int buzzerPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzerPin, 440);
  delay(500);
  noTone(buzzerPin);
}
