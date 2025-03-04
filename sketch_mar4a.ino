const int relayPin = 7;

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;         // number of steps the motor has taken

void setup() 
{
  pinMode(relayPin, OUTPUT);
}

void loop() 
{
  myStepper.step(5);
  // Serial.print("steps:");
  // Serial.println(stepCount);
  // stepCount++;
  delay(200);
  digitalWrite(relayPin, HIGH);
  delay(600);
  digitalWrite(relayPin, LOW);
  delay(600);
}
