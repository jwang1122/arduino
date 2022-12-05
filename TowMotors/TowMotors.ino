//www.elegoo.com
//2017.12.12

/************************
Exercise the motor using
the L293D chip
************************/
#include "SR04.h"
#include <Servo.h>

#define ENABLE 5
#define DIRA 3
#define DIRB 4
#define TRIG_PIN 12
#define ECHO_PIN 11

Servo myservo;

SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long a;
int redLED = 7;

int i;

void setup() {
  myservo.attach(9);
  myservo.write(90);  // move servos to center position -> 90°

  //---set pin direction
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //---back and forth example
  Serial.println("One way, then reverse");
  digitalWrite(ENABLE, HIGH);  // enable on
  for (i = 0; i < 5; i++) {
    a = sr04.Distance();
    Serial.print(a);
    Serial.println("cm");
    if (a > 5) {
      digitalWrite(ENABLE, HIGH);  // enable on
    } else {
      digitalWrite(ENABLE, LOW);  // enable on
    }
    myservo.write(40);  // move servos to center position -> 90°
    digitalWrite(redLED, HIGH);
    digitalWrite(DIRA, HIGH);  //one way
    digitalWrite(DIRB, LOW);
    delay(500);
    digitalWrite(redLED, LOW);
    myservo.write(160);       // move servos to center position -> 60°
    digitalWrite(DIRA, LOW);  //reverse
    digitalWrite(DIRB, HIGH);
    delay(500);
  }
  //     a = sr04.Distance();

  // if (a > 5) {
  //   digitalWrite(ENABLE, LOW);  // disable
  //   delay(2000);
  // }

  // Serial.println("fast Slow example");
  // //---fast/slow stop example
  // digitalWrite(ENABLE,HIGH); //enable on
  // digitalWrite(DIRA,HIGH); //one way
  // digitalWrite(DIRB,LOW);
  // delay(3000);
  // digitalWrite(ENABLE,LOW); //slow stop
  // delay(1000);
  // digitalWrite(ENABLE,HIGH); //enable on
  // digitalWrite(DIRA,LOW); //one way
  // digitalWrite(DIRB,HIGH);
  // delay(3000);
  // digitalWrite(DIRA,LOW); //fast stop
  // delay(2000);

  // Serial.println("PWM full then slow");
  // //---PWM example, full speed then slow
  // analogWrite(ENABLE,255); //enable on
  // digitalWrite(DIRA,HIGH); //one way
  // digitalWrite(DIRB,LOW);
  // delay(2000);
  // analogWrite(ENABLE,180); //half speed
  // delay(2000);
  // analogWrite(ENABLE,128); //half speed
  // delay(2000);
  // analogWrite(ENABLE,50); //half speed
  // delay(2000);
  // analogWrite(ENABLE,128); //half speed
  // delay(2000);
  // analogWrite(ENABLE,180); //half speed
  // delay(2000);
  // analogWrite(ENABLE,255); //half speed
  // delay(2000);
  // digitalWrite(ENABLE,LOW); //all done
  // delay(10000);
}