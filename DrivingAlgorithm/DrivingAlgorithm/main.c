#include <avr/io.h>
#include "MotorControl.h"
#include "LightsControl.h"
#include "SoundControl.h"
#include "Sensor_driver.h"

int main(void)
{
    int state = 0;
    while (1) 
    {
		switch (state)
		{
			case 1:
			//Afspille firstTrack, k�r fremad			
			break;
			
			case 2:
			// K�r fremad
			break;
			
			case 3:
			// K�r fremad m�ske bremse
			break;
			
			case 4:
			// K�r fremad 
			break;	
					
			case 5:
			// K�r fremad
			break;
			
			case 6:
			// Stop, begynd at k�r bagl�ns
			break;	
								
			case 7:
			// K�r bagl�ns (refleksbrik 6)
			break;	
					
			case 8:
			// stop, begynd k�r fremad (refleksbrik 5)
			break;
			
			case 9:
			//k�r fremad (reflekrsbrik 5)
			break;	
								
			case 10:
			// k�r fremad (refleksrbik 6)
			break;
			
			case 11:
			// Stop (refleksbrik 7)
			break;	
											
			default:
			/* Your code here */
			break;
		}
    }
}

