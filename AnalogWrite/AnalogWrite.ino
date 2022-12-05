int brightness = 0;
int analogOut = 9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(analogOut, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  // digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  for(int i=0; i<=256; i++){
    analogWrite(analogOut, i);   // turn the LED on (HIGH is the voltage level)
    Serial.println(i);
    delay(100);
  }
}
