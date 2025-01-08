float humi, float tempC;
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
#define DHTPIN1 3
#define DHTTYPE1 DHT11

DHT dht(DHTPIN, DHTTYPE);
DHT dht1(DHTPIN1, DHTTYPE1);

void setup() {
  Serial.begin(9600);
  dht.begin();
  dht1.begin();
}

void loop() {
  sensingcondition();
    delay(2000);
}

void sensingcondition() {
  float humi = dht.readHumidity();
  float tempC = dht.readTemperature();
   float humi = dht1.readHumidity();
  float tempC = dht1.readTemperature();

  // check if any reads failed
  if (isnan(humi) || isnan(tempC) ) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humi);
    Serial.print("%");

    Serial.print("  |  ");

    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.print("°C ~ ");
    
  }
}