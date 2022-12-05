int readVal;
float v2 = 0.0;
int analogOut = 9;
int analogIn = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(analogIn, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  // digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  readVal = analogRead(analogIn);   // turn the LED on (HIGH is the voltage level)
  v2 = (5.0/1023.)* readVal;
  Serial.println(v2);
  delay(500);
}
