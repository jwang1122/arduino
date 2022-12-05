int measurePoint = 8;
int redLED = 7;
int readVal;
int oldBtn = 1;
int newBtn;
int ledState = 0;

void setup() {
  pinMode(measurePoint, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = digitalRead(measurePoint);
  newBtn = readVal;
  Serial.print(readVal);
  Serial.print(":");
  Serial.print(oldBtn);
  Serial.print(":");
  Serial.println(ledState);
  if (oldBtn == 1 && newBtn == 0) {
    if (ledState == 0) {
      digitalWrite(redLED, HIGH);
      ledState = 1;
    } else {
      digitalWrite(redLED, LOW);
      ledState = 0;
    }
  }
  oldBtn = newBtn;


  delay(200);
}