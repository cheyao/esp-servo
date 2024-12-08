#include <Servo.h>
 
Servo servo;
byte lstate;

void setup() {
    servo.attach(D4);
    servo.write(0);
    pinMode(0, INPUT_PULLUP);
}
 
void loop() {
    byte state = digitalRead(0);
    if (lstate != state) {
	if (state == LOW) {
		servo.write(0);
	} else {
		servo.write(180);
	}
	lstate = state;
    }
}
