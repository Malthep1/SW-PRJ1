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
			//Afspille firstTrack, kør fremad			
			break;
			
			case 2:
			// Kør fremad
			break;
			
			case 3:
			// Kør fremad måske bremse
			break;
			
			case 4:
			// Kør fremad 
			break;	
					
			case 5:
			// Kør fremad
			break;
			
			case 6:
			// Stop, begynd at kør baglæns
			break;	
								
			case 7:
			// Kør baglæns (refleksbrik 6)
			break;	
					
			case 8:
			// stop, begynd kør fremad (refleksbrik 5)
			break;
			
			case 9:
			//kør fremad (reflekrsbrik 5)
			break;	
								
			case 10:
			// kør fremad (refleksrbik 6)
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

