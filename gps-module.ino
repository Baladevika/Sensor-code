#include <SoftwareSerial.h>
#include <TinyGPS++.h>

// Define the RX and TX pins for communication
SoftwareSerial ss(4, 3); // RX, TX

// Create a TinyGPS++ object
TinyGPSPlus gps;

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Start the software serial communication with the GPS module
  ss.begin(9600);
  
  Serial.println("GPS Module Test");
}

void loop() {
  // Feed data from GPS to TinyGPS++
  while (ss.available() > 0) {
    gps.encode(ss.read());
    
    // If a new GPS fix is available
    if (gps.location.isUpdated()) {
      Serial.print("Latitude= ");
      Serial.print(gps.location.lat(), 6); // Get latitude with 6 decimal points
      Serial.print(" Longitude= ");
      Serial.println(gps.location.lng(), 6); // Get longitude with 6 decimal points
    }
  }
}
