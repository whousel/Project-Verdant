const int floatSwitchPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(floatSwitchPin, INPUT_PULLUP); 
}

void loop() {
  int switchState = digitalRead(floatSwitchPin);

  if (switchState == LOW) {
    Serial.println("Reservoir Full");
  } else {
    Serial.println("Reservoir Empty");
  }
  delay(100);
}