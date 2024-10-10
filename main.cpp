#include <Arduino.h>

// put function declarations here:
#define ANALOG A0
#define DIGITAL 3

int analog, digital;
double vol;

void setup() {
  // put your setup code here, to run once:
  pinMode(ANALOG, INPUT);
  pinMode(DIGITAL, INPUT);
  Serial.begin(9600);
  Serial.println("t (ms), analog, digital");
}

void loop() {
  // put your main code here, to run repeatedly:
  analog = analogRead(ANALOG);
  digital = digitalRead(DIGITAL);
  vol = analog * 5.0 /1023.0;
  Serial.print(millis());
  Serial.print(", ");
  Serial.print(analog);
  Serial.print(", ");
  Serial.println(digital);
  Serial.print(", ");
  Serial.println(vol);
  delay(500);
}

