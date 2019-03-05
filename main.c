#include <kipr/botball.h>

int main()
{
    wait_for_light(0); 

    enable_servos();
    set_servo_position(0,914);

    motor(0,100);
    motor(2,100);
    msleep(700);
   
    motor(0,50);
    motor(2,100);
    msleep(500);
    
     motor(0,100);
    motor(2,100);
    msleep(4000);
    
    set_servo_position(3,950);
    set_servo_position(0,1727);
    set_servo_position(3,0);
    
    motor(0,-100);
    motor(2,-100);
    msleep(3000);
   
    motor(0,100);
    motor(2,-100);
    msleep(100);
    
    return 0;
}
