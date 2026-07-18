/*
Code from HuHamster YouTube chanel
Link: https://www.youtube.com/@HuHamster
*/

#include <SPI.h>
#include <SD.h>

// This is the pin that activates the SD card module.
// It is usually pin 10 on Uno/Nano boards.
const int chipSelect = 10;

void setup() {
  // Start communication with the computer (Serial Monitor)
  Serial.begin(9600);
  
  Serial.print("Starting SD card...");

  // Try to start the SD card module
  if (!SD.begin(chipSelect)) {
    Serial.println("SD card failed or not present!");
    return; // Stop the program here if it fails
  }
  Serial.println("SD card connected.");

  // --- PART 1: WRITE DATA ---
  
  // Open the file 'data.txt'. FILE_WRITE allows us to save new data.
  File dataFile = SD.open("data.txt", FILE_WRITE);

  if (dataFile) {
    Serial.println("Writing text to data.txt...");
    dataFile.println("This message is now saved on the card.");
    
    // IMPORTANT: You MUST close the file to save the data.
    dataFile.close();
    Serial.println("Writing complete.");
  } else {
    Serial.println("ERROR: Could not open data.txt for writing.");
  }
}
