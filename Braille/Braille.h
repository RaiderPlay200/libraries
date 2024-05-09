#ifndef Braille_h
#define Braille_h

#include <Arduino.h>
#include <Servo.h>

class Braille
{

public:

Braille();
void begin(int down, int down2, int down3, int down4, int down5, int down6);
void Down(int down, int down2, int down3, int down4, int down5, int down6);
void UP(int up1, int up2, int up3, int up4, int up5, int up6);
void wait(int HoldUp);
void F_Braille(char val, int up1, int up2, int up3, int up4, int up5, int up6);

private:

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

};
#endif