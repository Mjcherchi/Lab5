SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t valueO = analogRead(A5);

void setup()
{
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
}

void loop()
{
  uint16_t valueO = analogRead(A5);
  uint16_t mapC = map(valueO, 0, 4095, 0, 255);
  analogWrite(D5, mapC);
}