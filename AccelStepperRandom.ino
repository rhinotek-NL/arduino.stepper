// Shows how to run 3 stepper motors with auto random direction and speed
// using Arduino Uno with CNC shield and stepstick DRV8825 with their curret setting about 200mA
// and uning  12vdc power adaptor
// in this program we are using stepper1 , stepper2 , and stepper4 by skipping stepper3 
// Copyright (C) 2010 Rhinotek BV

#include <AccelStepper.h>
#define X_ENABLE_PIN  38
#define Y_ENABLE_PIN  56
#define Z_ENABLE_PIN  62
#define A_ENABLE_PIN  24


AccelStepper stepper1(AccelStepper::DRIVER, 54, 55);
AccelStepper stepper2(AccelStepper::DRIVER, 60, 61);
AccelStepper stepper3(AccelStepper::DRIVER, 46, 48);
AccelStepper stepper4(AccelStepper::DRIVER, 26, 28);


void setup()
{ 

pinMode(X_ENABLE_PIN, OUTPUT);
pinMode(Y_ENABLE_PIN, OUTPUT);
pinMode(Z_ENABLE_PIN, OUTPUT);
pinMode(A_ENABLE_PIN, OUTPUT);
   
 digitalWrite(X_ENABLE_PIN, LOW);
 digitalWrite(Y_ENABLE_PIN, LOW);
 digitalWrite(Z_ENABLE_PIN, LOW);
 digitalWrite(A_ENABLE_PIN, LOW);

}

void loop()
{
    if (stepper1.distanceToGo() == 0)
    {
 
  
  // dont set 0 speed or accelerations
  
  delay(1000);
  stepper1.moveTo(rand() % 5000);
  stepper1.setMaxSpeed((rand() % 1000) + 1);
  stepper1.setAcceleration((rand() % 1000) + 1);
    }
    stepper1.run();


if (stepper2.distanceToGo() == 0)
    {
  
  
  // dont set 0 speed or accelerations
  
  delay(1000);
  stepper2.moveTo(rand() % 5000);
  stepper2.setMaxSpeed((rand() % 1000) + 1);
  stepper2.setAcceleration((rand() % 1000) + 1);
    }
    stepper2.run();


if (stepper4.distanceToGo() == 0)
    {
  
  
  // dont set 0 speed or accelerations
  
  delay(1000);
  stepper4.moveTo(rand() % 5000);
  stepper4.setMaxSpeed((rand() % 1000) + 1);
  stepper4.setAcceleration((rand() % 1000) + 1);
    }
    stepper4.run();


}
