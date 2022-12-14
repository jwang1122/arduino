int COUNTER = A0;
int count = 0;
void setup() {
  pinMode(COUNTER, INPUT);
  Serial.begin(9600);
  Serial.println();
  
}

void loop() {
  int value = digitalRead(COUNTER);
count += value;
Serial.println(count);
delay(100);

}
