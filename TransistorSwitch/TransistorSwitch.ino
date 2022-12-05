int collectorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(collectorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(collectorPin);
  Serial.println(value);
  delay(200);
}
