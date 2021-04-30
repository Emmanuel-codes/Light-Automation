#define pir 8
int pirState;

void setup(){
  pinMode(pir, INPUT);
  Serial.begin(9600);
}
void loop(){
  pirState = digitalRead(pir);
  if (pirState == HIGH){
    Serial.println("Motion detected");
  }
  else if (pirState == LOW){
    Serial.println("None detected");
  }
  delay(10);
}
