/*IR remote control car with Arduino.
 */
 
#include <AFMotor.h>
#include <IRremote.h>

AF_DCMotor motor1(3);
AF_DCMotor motor2(4);

IRrecv IR(A0);
decode_results result;

int Speed = 150;

#define up 83841199
#define down 83873839
#define left 83865679
#define right 83833039
#define Stop 83859559

void setup() {
  Serial.begin(9600);
  motor1.setSpeed(Speed);
  motor2.setSpeed(Speed);
  IR.enableIRIn();
}

void loop() {
  if (IR.decode(&result)) {
    Serial.println(result.value);
    IR.resume();
  }
  delay(100);
  if (result.value == up ) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  } else if (result.value == down ) {
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
  } else if (result.value == Stop) {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
  } else if (result.value == left) {
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
  } else if (result.value == right) {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
  }
}
