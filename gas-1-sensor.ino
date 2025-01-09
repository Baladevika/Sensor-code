// Gas  sensor digital pin
int gas = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int gasRead = digitalRead(gas);
  Serial.println("Analog value: ");
  Serial.println(gasRead);
  if (gasRead == HIGH) {
    Serial.println("Smoke Detected");
  } else {
    Serial.println("No Smoke");
  }
  delay(500);
}