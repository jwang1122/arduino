int readVal;
int v2Out;
int analogOut = 9;
int analogIn = A0;

void setup() {
  pinMode(analogIn, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(analogIn); 
  v2Out = (255.0/1023.)* readVal;
  float v2 =  5./1023 * readVal;
  float v1 = 5.0 - v2;
  analogWrite(analogOut,v2Out);
  Serial.print("v1=");
  Serial.print(v1);
  Serial.print("; v2=");
  Serial.println(v2Out);
  delay(500);
}
