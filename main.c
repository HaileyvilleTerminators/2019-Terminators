#include <kipr/botball.h>

int main()
{
    wait_for_light(0); 			// Waits for light
    
    motor(0,80);				// Turns on motor with specified port 0 at 80 velocity 
    motor(2,80);				// Turns on motor with specified port 2 at 80 velocity    
    msleep(500);				// Waits specified number of milliseconds before next line
    
    motor(0,80);				// Turns on motor with specified port 0 at 80 velocity
    motor(2,40);				// Turns on motor with specified port 2 at 40 velocity    
    msleep(550);				// Waits specified number of milliseconds before next line
    ao();					// All off, turns all motor ports off
    
    enable_servos();			// Turns on servo ports
    set_servo_position(0,1757);		// Moves servo in specified port 0 to specified position
    msleep(1000);				// Waits specified number of milliseconds before next line
    
    set_servo_position(3,979);		// Moves servo in specified port 3 to specified position
    msleep(1000);				// Waits specified number of milliseconds before next line
    disable_servos();			//Turns off servo ports
    
    return 0;
}
