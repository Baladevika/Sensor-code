int gasRead,gas;

// Gas  sensor digital pin
int gas_Sensor1 = 3;
int gas_Sensor = 4;
void setup() {
  pinset(gas_Sensor1, INPUT);
  pinset(gas_Sensor, INPUT);
}
void loop() {
  conditionSate(gas_Sensor1,"Sensor1");
  conditionSate(gas_Sensor,"Sensor2");

  delay(500);
}
//***************PINMODE SETTING*************
void pinset(int pin, int state) {

  pinMode(pin, state);
  Serial.begin(9600);
}

void conditionSate(int gas,String data) {
  int gasRead = digitalRead(gas);
  Serial.println(gasRead);
  if (gasRead == HIGH) {
    Serial.println("Smoke Detected");
  } else {
    Serial.println("No Smoke");
  }
}