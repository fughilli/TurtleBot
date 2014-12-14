#include "Servo.h"
#include <unistd.h>

int main(int argc, char* argv[])
{
    Servo s(4, 0x40);
    
    s = 0.5;
    sleep(1);
    s = 0;
    sleep(1);
    s = 1;
    
    return 0;
}
