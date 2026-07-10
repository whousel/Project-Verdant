const int MOISTURESENSOR = A1; //the sensor to read
const int WATERLEVELSENSORPIN = A2;
const int WATERLEVELSENSORPOWER = 3;
const int PUMP = 2; //the pin connecting to the pump's input
const int WET = 230; //sensor reading for wet
const int DRY = 615; //sensor reading for dry
const int WET_THRESHOLD = 80; 
const int DRY_THRESHOLD = 20;
int waterLevel = 0;
const unsigned long WATERLEVELINTERVAL = 100;
const unsigned long MOISTURETESTINGINTERVAL = 1000;
unsigned long waterLevelTimer = 0;
unsigned long MoistTimer = 0;
bool lowWater = true;
const int LOW_WATER_THRESHOLD = 100;

 
void setup() {
  Serial.begin(9600);
  pinMode(MOISTURESENSOR, INPUT);
  pinMode(PUMP, OUTPUT);
  pinMode(WATERLEVELSENSORPIN, INPUT);
  pinMode(WATERLEVELSENSORPOWER, OUTPUT);
  digitalWrite(PUMP, HIGH); //ensures the pump starts off

}
 
void loop() {
  unsigned long currentTime = millis();
  if (currentTime - MoistTimer >= MOISTURETESTINGINTERVAL)
  {
    moistureLevel();
    MoistTimer = currentTime;
  }
  if (currentTime - waterLevelTimer >= WATERLEVELINTERVAL)
  {
      findWaterLevel();
      waterLevelTimer = currentTime;
  }

}
void moistureLevel()
{
  int value = analogRead(MOISTURESENSOR);
  int moisturePercentage = map(value, WET, DRY, 100, 0); 
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
  else if (lowWater == false)
  {
    Serial.println("Soil is dry");
    digitalWrite(PUMP, LOW);
    Serial.println("Pump: ON");
  }
  else
  {
    Serial.println("Soil is dry, Water tank empty");
    digitalWrite(PUMP, HIGH);
    Serial.println("Pump: OFF");
  }
}
void findWaterLevel() {
  digitalWrite(WATERLEVELSENSORPOWER, HIGH);  // Turn the sensor ON
  delay(100); //here until i can get a better sensor
  int val = analogRead(WATERLEVELSENSORPIN);      // Read the analog value form sensor
  digitalWrite(WATERLEVELSENSORPOWER, LOW);   // Turn the sensor OFF
  if (val <= 100)
  {
    lowWater = true;
  }
  else
  {
    lowWater = false;
  }
  Serial.print("Water Level Reading: ");
  Serial.println(val);
  if(lowWater)
  {
      Serial.println("Reservoir: Empty");
  }
  else
  {
      Serial.println("Reservoir: Full");
  }
}          
                    
