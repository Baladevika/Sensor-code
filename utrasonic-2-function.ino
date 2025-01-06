 int triger1=5;
 int echo1=6;
 int triger2=7;
 int echo2=8;
 
 float duration;
 float distance;
void setup() {
  // put your setup code here, to run once:
pinfunction(triger1,echo1);
pinfunction(triger2,echo2);
Serial.begin(9600);
}

void loop() {
distancefunction(triger1,echo1);
Serial.print("Distance : ");
Serial.println(distance);
distancefunction(triger2,echo2);
Serial.print("Distance : ");
Serial.println(distance);
}

void pinfunction(int triger,int echo){
pinMode(triger,OUTPUT);
pinMode(echo, INPUT);
}
void distancefunction(int triger,int echo){
    // put your main code here, to run repeatedly:
digitalWrite(triger, LOW);
delayMicroseconds(2);
digitalWrite(triger,HIGH);
delayMicroseconds(10);
digitalWrite(triger,LOW);
duration = pulseIn(echo,HIGH); // for input high for measure
distance =(duration/2)*0.0343;
}
