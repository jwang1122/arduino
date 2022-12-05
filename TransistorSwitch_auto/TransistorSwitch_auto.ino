int collectorPin = A0;
int basePin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(collectorPin, INPUT);
  pinMode(basePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(basePin, HIGH);
  int value = digitalRead(collectorPin);
  Serial.print("input=1; output=");
  Serial.println(value);
  delay(500);
  digitalWrite(basePin, LOW);
  value = digitalRead(collectorPin);
  Serial.print("input=0; output=");
  Serial.println(value);
  delay(500);
}
