#include <kipr/botball.h>

int main()
{
    printf("Frick\n");
    motor(0,50);
    motor(1,50);
    msleep(5000);
    ao();
    msleep(1000);
    motor(0,-50);
    motor(1,50);
    msleep(2617);
    ao();
    msleep(750);
    motor(0,-50);
    motor(1,50);
    msleep(2617);
    ao();
    msleep(750);
    motor(0,-50);
    motor(1,-50);
    msleep(5000);
    ao();
    
    return 0;
}
