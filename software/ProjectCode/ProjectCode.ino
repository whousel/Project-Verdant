//code by William Housel

#include <SPI.h>
#include <SD.h>

const int MOISTURESENSOR = A1; //the sensor to read
const int PUMP = 2; //the pin connecting to the pump's input
const int WET = 230; //sensor reading for wet
const int DRY = 615; //sensor reading for dry
const int WET_THRESHOLD = 80; 
const int DRY_THRESHOLD = 20;
const int floatSwitchPin = 4;

const int chipSelect = 10; //activates the SD card module.

unsigned long seconds; //seconds since cycle began, changed to long to prevent int overflow
int soilMoistureState; //soil moisture percentage
int waterLevelState; //0 = Empty, 1 = Full
int pumpState; //0 = Off, 1 = On

const unsigned long LOG_INTERVAL  = 1000;
unsigned long logTimer = 0;


void setup() {
  Serial.begin(9600);
  pinMode(MOISTURESENSOR, INPUT);
  pinMode(PUMP, OUTPUT);
    pinMode(floatSwitchPin, INPUT_PULLUP); 

  digitalWrite(PUMP, HIGH); //ensures the pump starts off
  Serial.println("Seconds, Moisture %, Water Level, Pump State");
  delay(100); //gives the SD card reader a chance to turn on and stabilize
  if (!SD.begin(chipSelect)) 
  {
    Serial.println("SD initialization failed! Check card/wiring.");
  } 
  else 
  {
    Serial.println("SD card initialized successfully.");
  }

  //prints the headers to data.txt for easy graphing
  File dataFile = SD.open("data.txt", FILE_WRITE);
    
    if (dataFile) {
      
      dataFile.println("Seconds, Moisture %, Water Level, Pump State");
      dataFile.close(); 
    }
    else 
    {
      Serial.println("Error accessing the SD card");
    }

}
 
void loop() {
  unsigned long currentTime = millis();
  if (currentTime - logTimer >= LOG_INTERVAL )
  {
    seconds = currentTime/1000;
      
      findWaterLevel(); //changed to use side mounted magnetic float switch
      moistureLevel();
      
      logTimer = currentTime;

    File dataFile = SD.open("data.txt", FILE_WRITE);
    
    if (dataFile) {
      
      dataFile.print(seconds);
      dataFile.print(",");
      dataFile.print(soilMoistureState);
      dataFile.print(",");
      dataFile.print(waterLevelState);
      dataFile.print(",");
      dataFile.println(pumpState);
      
      
      dataFile.close(); 
    } 
    else 
    {
       Serial.println("Error accessing the SD card");
    }
      //printing the actions as comma seperated values (csv) for easy tracking
      // Serial.print(seconds);
      // Serial.print(",");
      // Serial.print(soilMoistureState);
      // Serial.print(",");
      // Serial.print(waterLevelState);
      // Serial.print(",");
      // Serial.println(pumpState);
  }

}
void moistureLevel()
{
  int value = analogRead(MOISTURESENSOR);
  int moisturePercentageRaw = map(value, WET, DRY, 100, 0); 
  int moisturePercentage = constrain(moisturePercentageRaw,0,100);
  if (moisturePercentage >= WET_THRESHOLD)
  {
    digitalWrite(PUMP, HIGH);
    pumpState = 0;
  }
  else if (moisturePercentage >= DRY_THRESHOLD)
  {
    digitalWrite(PUMP, HIGH);
    pumpState = 0;
  }
  else if (waterLevelState == 1)
  {
    digitalWrite(PUMP, LOW);
    pumpState = 1;
  }
  else
  {
    digitalWrite(PUMP, HIGH);
    pumpState = 0;
  }
  soilMoistureState = moisturePercentage;
}
void findWaterLevel() 
{
  int switchState = digitalRead(floatSwitchPin);
  if (switchState == LOW) 
  {
    waterLevelState = 1;
  } 
  else 
  {
    waterLevelState = 0;
  }
}          
                    
