int sensor1=3, output1=4;
int sensor2=5, output2=6;

void setup() {
  pinconnection(sensor1, output1);
  pinconnection(sensor2, output2);
  Serial.begin(9600);
}

void loop() {
  condition(sensor1, output1,"sensor 1");  
  condition(sensor2, output2,"sensor 2");
//  if(digitalRead(sensor1)==HIGH && )
  
}

// **pinmode**
void pinconnection(int sensor, int output) {
  pinMode(sensor, INPUT);
  pinMode(output, OUTPUT);
}
// **Condition**
void condition(int sensor, int output,String data) {
  if (analogRead(sensor) == 300) {
    digitalWrite(output, HIGH);
    Serial.println(data);
    Serial.println("Soil is Dry Stae");
    delay(1000);
    
  } else {
    Serial.println(data);
    digitalWrite(output, LOW);
    Serial.println("Moisture State");
    delay(1000);
  }
}
