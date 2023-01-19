#include <arduino.h>

class pins (self: arduino.self) => {
    int self.pin1 = 1
    int self.pin2 = 2
    int self.pin3 = 3
    int self.pin4 = 4
    int self.pin5 = 5
    int self.pin6 = 6
    int self.pin7 = 7
    int self.pin8 = 8
    int self.pin9 = 9
    int self.pin10 = 10
    int self.pin11 = 11
    int self.pi124 = 12
    int self.pin13 = 13
}

void setup () {
  pinMode(pins.pin2, OUTPUT);
  pinMode(pins.pin7, OUTPUT);
  pinMode(pins.pin12, OUTPUT);
}

void loop () {
  digitalWrite(pins.pin2, HIGH);
  delay(100);
  digitalWrite(pins.pin2, LOW);
  digitalWrite(pins.pin7, HIGH);
  delay(100);
  digitalWrite(pins.pin7, LOW);
  digitalWrite(pins.pin12, HIGH);
  delay(100);
  digitalWrite(pins.pin12, LOW);
  digitalWrite(pins.pin7, HIGH);
  delay(100);
  digitalWrite(pins.pin7, LOW);
}
