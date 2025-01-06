
int ecopin=2;
int trigerpin = 5;

float duration, distance;
void setup() {
  pinMode(trigerpin, OUTPUT);
  pinMode(ecopin, INPUT);   
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigerpin, LOW);
  delay(500);  
  digitalWrite(trigerpin, HIGH);
  delay(500);
  digitalWrite(trigerpin, LOW);  

  duration = pulseIn(ecopin, HIGH);
  distance = (duration*0.034)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
     
  delay(100);
}