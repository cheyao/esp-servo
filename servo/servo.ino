#include <Servo.h>
 
Servo servo;
 
void setup() {
    servo.attach(D4);
    servo.write(0);
    delay(2000);
    pinMode(0, INPUT_PULLUP);
}
 
void loop() {
    if (digitalRead(0) == LOW) {
        servo.write(0);
    } else {
        servo.write(180);
    }
}