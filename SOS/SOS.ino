int dit = 250; // 短
int dah = 700;  // 长
int greenLED = 12;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int i=0; i<3; i++){
    displayDit();
  }
  for(int i=0; i<3; i++){
    displayDah();
  }
  for(int i=0; i<3; i++){
    displayDit();
  }
  delay(1000);
}

void displayDit(){
  digitalWrite(greenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);                       // wait for a second
  digitalWrite(greenLED, LOW);    // turn the LED off by making the voltage LOW
  delay(dit);                       // wait for a second  
}

void displayDah(){
  digitalWrite(greenLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);                       // wait for a second
  digitalWrite(greenLED, LOW);    // turn the LED off by making the voltage LOW
  delay(dit);                       // wait for a second  

}