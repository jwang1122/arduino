int collectorPin = A0;
int base1Pin = 8;
int base2Pin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(collectorPin, INPUT);
  pinMode(base1Pin, OUTPUT);
  pinMode(base2Pin, OUTPUT);
  Serial.begin(9600);
  Serial.println();
  // send(HIGH, HIGH);      
  // send(HIGH, LOW);      
  // send(LOW, HIGH);      
  // send(LOW, LOW);      
  

  // digitalWrite(base1Pin, HIGH);
  // digitalWrite(base2Pin, HIGH);
  // int value = digitalRead(collectorPin);
  // Serial.print("base1=1; base2=1; output=");
  // Serial.println(value);
  // digitalWrite(base1Pin, HIGH);
  // digitalWrite(base2Pin, LOW);
  // value = digitalRead(collectorPin);
  // Serial.print("base1=1; base2=0; output=");
  // Serial.println(value);
  // digitalWrite(base1Pin, LOW);
  // digitalWrite(base2Pin, HIGH);
  // value = digitalRead(collectorPin);
  // Serial.print("base1=0; base2=1; output=");
  // Serial.println(value);
  // digitalWrite(base1Pin, LOW);
  // digitalWrite(base2Pin, LOW);
  // value = digitalRead(collectorPin);
  // Serial.print("base1=0; base2=0; output=");
  // Serial.println(value);

}

void send(int base1, int base2){
  digitalWrite(base1Pin, base1);
  digitalWrite(base2Pin, base2);
  // int value = digitalRead(collectorPin); // move this line few lines down
  Serial.print("base1=");
  Serial.print(base1);
  Serial.print("; base2=");
  Serial.print(base2);
  Serial.print("; output=");
  int value = digitalRead(collectorPin);
  Serial.println(value);
  
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
  send(HIGH, HIGH);      
  send(HIGH, LOW);      
  send(LOW, HIGH);      
  send(LOW, LOW);      
}
