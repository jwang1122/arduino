
int sigRight = 11;
int sigLeft = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(sigRight, OUTPUT);
  pinMode(sigLeft, OUTPUT);
  Serial.begin(9600);
  Serial.println();
 }

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(sigRight, 120);
  analogWrite(sigLeft, 0);
  delay(1000);
  analogWrite(sigRight,0);
  analogWrite(sigLeft,120);
  delay(1000);
  analogWrite(sigRight,0);
  analogWrite(sigLeft,0);
  delay(1000);
  analogWrite(sigRight, 255);
  analogWrite(sigLeft, 255);
  delay(2000);
  analogWrite(sigRight,0);
  analogWrite(sigLeft,0);
  delay(1000);

}
