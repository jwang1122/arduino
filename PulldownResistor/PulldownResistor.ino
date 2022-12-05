int measurePoint = 8;
int redLED = 7;
int readVal;

void setup() {
  pinMode(measurePoint, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);        
}

void loop() {
  readVal = digitalRead(measurePoint);
  Serial.println(readVal);
  if(readVal==0){
    digitalWrite(redLED, HIGH);
  }else{
    digitalWrite(redLED, LOW);
  }
  delay(200);
}
