#ifndef Braille_h
#define Braille_h

#include "Arduino.h"
#include <Servo.h>

class Braille
{

public:

Braille();
void begin();
void Down();
void UP();

private:

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

};
#endif