int buttonA = 3;
int led = 5;
int buttonB = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println();
}

void loop() {

  if (digitalRead(buttonA) == LOW) {
    digitalWrite(led, HIGH);
  }
  if (digitalRead(buttonB) == LOW) {
    digitalWrite(led, LOW);
  }
}