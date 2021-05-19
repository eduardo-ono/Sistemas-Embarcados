
const int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  static int state = 1;
  static int num = 0;
  digitalWrite(ledPin, state);
  Serial.println(num);
  num++;
  if (num % 100 == 0)
    num = 0;
  state = !state;
  delay(100);
}
