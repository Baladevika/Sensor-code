void setup() {
  // put your setup code here, to run once:

pinMode(9, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(A0)>1000){ //  increase the value it light sensing valie incease
   digitalWrite(9, HIGH);  
   Serial.println("LED On");
}
else{
  
   digitalWrite(9,LOW);
   Serial.println("LED Off");
}
}
