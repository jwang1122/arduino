int readVal;
int v2;
int analogOut = 9;
int analogIn = A0;

void setup() {
  pinMode(analogIn, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(analogIn); 
  v2 = (255.0/1023.)* readVal;
  analogWrite(analogOut,v2);
  Serial.println(v2);
}
