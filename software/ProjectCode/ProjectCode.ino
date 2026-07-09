const int SENSOR = A1; //the sensor to read
const int PUMP = 2; //the pin connecting to the pump's input
const int WET = 230; //sensor reading for wet
const int DRY = 615; //sensor reading for dry
const int WET_THRESHOLD = 80; 
const int DRY_THRESHOLD = 20;
 
void setup() {
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  pinMode(PUMP, OUTPUT);
  digitalWrite(PUMP, HIGH); //ensures the pump starts off
}
 
void loop() {
  int value = analogRead(SENSOR);
  //Serial.println(value); //used for soil moisture measurement
  int pre = map(value, WET, DRY, 100, 0); 
  pre = constrain(pre,0,100);
  Serial.print("Moisture Level: ");
  Serial.print(pre);
  Serial.println("%");
  if (pre >= WET_THRESHOLD)
  {
    Serial.println("Soil is wet");
    digitalWrite(PUMP, HIGH);
    Serial.println("Pump: OFF");
  }
  else if (pre >= DRY_THRESHOLD)
  {
    Serial.println("Soil is damp");
    digitalWrite(PUMP, HIGH);
    Serial.println("Pump: OFF");
  }
  else
  {
    Serial.println("Soil is dry");
    digitalWrite(PUMP, LOW);
    Serial.println("Pump: ON");
  }
  delay(1000); //change to millis

}