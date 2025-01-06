int triger1 = 5;
int echo1 = 6;
int triger2 = 7;
int echo2 = 8;
int triger3 = 9;
int echo3 = 10;

float duration;
float distance;
void setup() {
  // put your setup code here, to run once:
  pinfunction(triger1, echo1);
  pinfunction(triger2, echo2);
  pinfunction(triger3, echo3);

  Serial.begin(9600);
}

void loop() {
  distancefunction(triger1, echo1);
  Serial.print("Distance : ");
  Serial.println(distance);
  distancefunction(triger2, echo2);
  Serial.print("Distance : ");
  Serial.println(distance);
  distancefunction(triger3, echo3);
  Serial.print("Distance : ");
  Serial.println(distance);
}

// ************pinMode Function**************
void pinfunction(int triger, int echo) {
  pinMode(triger, OUTPUT);
  pinMode(echo, INPUT);
}

// ************void loop function*************
void distancefunction(int triger, int echo) {

  digitalWrite(triger, LOW);
  delayMicroseconds(2);
  digitalWrite(triger, HIGH);
  delayMicroseconds(10);
  digitalWrite(triger, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) * 0.0343;
}
