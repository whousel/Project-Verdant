const int PUMP = 2;
const int BUTTON = 3;
void setup() {
  
  pinMode(PUMP, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(BUTTON) == HIGH)
  {
    digitalWrite(PUMP, LOW);//pump turns on for low voltage relay
  }
  else
  {
    digitalWrite(PUMP, HIGH);//pump turns on for low voltage relay
  }
}
