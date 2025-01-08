void setup() {

pinMode(8,OUTPUT);//LED
pinMode(7,INPUT);
digitalWrite(7,HIGH);
Serial.begin(9600);

}

void loop() {
  if(digitalRead(7)==LOW){
    digitalWrite(8,HIGH);
    Serial.println("LIGHT ON");
  }
  else{
    digitalWrite(8,LOW);
    Serial.println("LIGHT OFF");
  }
}
