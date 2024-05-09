#include "Braille.h"
#include <Arduino.h>
#include <Servo.h>

Braille::Braille()
{
  //begin();
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
servo6.attach(11);

servo1.write(down);
servo2.write(down2);
servo3.write(down3);
servo4.write(down4);
servo5.write(down5);
servo6.write(down6);
}

void Braille::wait(int HoldUp)
{
  delay(HoldUp);
}

void Braille::UP(int up, int up2, int up3, int up4, int up5, int up6)
{
servo1.write(up);
servo2.write(up2);
servo3.write(up3);
servo4.write(up4);
servo5.write(up5);
servo6.write(up6);
}

void Braille::Down(int down, int down2, int down3, int down4, int down5, int down6)
{
servo1.write(down);
servo2.write(down2);
servo3.write(down3);
servo4.write(down4);
servo5.write(down5);
servo6.write(down6);
}

/*void Braille::begin()
{
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
servo6.attach(11);

servo1.write(down);
servo2.write(down2);
servo3.write(down3);
servo4.write(down4);
servo5.write(down5);
servo6.write(down6);
}
*/

void Braille::F_Braille(char val)
{
  UP();
  Down();

     if (val == 'a' or val == 'b' or val == 'c' or val == 'd' or val == 'e' or val == 'f' or val == 'g' or val == 'h' or val == 'k' or val == 'l' or val == 'm' or val == 'n' or val == 'o' or val == 'p' or val == 'q' or val == 'r' or val == 'u' or val == 'v' or val == 'x' or val == 'y' or val == 'z')
    {
      servo1.write(up);
    }

    if (val == 'b' or val == 'f' or val == 'g' or val == 'h' or val == 'i' or val == 'j' or val == 'l' or val == 'p' or val == 'q' or val == 'r' or val == 's' or val == 't' or val == 'v' or val == 'w')
    {
      servo2.write(up2);
    }

    if (val == 'k' or val == 'l' or val == 'm' or val == 'n' or val == 'o' or val == 'p' or val == 'q' or val == 'r' or val == 's' or val == 't' or val == 'u' or val == 'v' or val == 'x' or val == 'y' or val == 'z')
    {
      servo3.write(up3);
    }

    if (val == 'c' or val == 'd' or val == 'f' or val == 'g' or val == 'i' or val == 'j' or val == 'm' or val == 'n' or val == 'p' or val == 'q' or val == 's' or val == 't' or val == 'w' or val == 'x' or val == 'y')
    {
      servo4.write(up4);
    }

    if (val == 'd' or val == 'e' or val == 'g' or val == 'h' or val == 'j' or val == 'n' or val == 'o' or val == 'q' or val == 'r' or val == 't' or val == 'w' or val == 'y' or val == 'z')
    {
      servo5.write(up5);
    }

    if (val == 'u' or val == 'v' or val == 'w' or val == 'x' or val == 'y' or val == 'z')
    {
      servo6.write(up6);
    }

    wait(1000);
    servo1.write(down);
    servo2.write(down2);
    servo3.write(down3);
    servo4.write(down4);
    servo5.write(down5);
    servo6.write(down6);
    delay(500);
}
