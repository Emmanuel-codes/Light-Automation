#define pir1 8
#define pir2 9
int pirState1, pirState2;



void setup(){
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  Serial.begin(9600);
}
void loop(){
  pirState1 = digitalRead(pir1);
  pirState2 = digitalRead(pir2);
  if (pirState1 == HIGH || pirState2 == HIGH){
    Serial.println("Motion detected");
  }
  else if (pirState1 == LOW && pirState2 == LOW){
    Serial.println("None detected");
  }
  delay(10);
}
