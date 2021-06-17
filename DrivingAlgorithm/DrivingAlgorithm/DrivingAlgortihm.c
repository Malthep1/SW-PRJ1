#include "MotorControl.h"
#include "LightsControl.h"
#include "SoundControl.h"
#include "Sensor_driver.h"
#include "DrivingAlgortihm.h"
void drivingAlgorihm(){
	
	int state = getCounter();
	switch (state)
	{
		case 1:
		//Afspille firstTrack, kør fremad
		PlayTrackOne();
		forward(100);
		break;
		
		case 2:
		// Kør fremad
		PlayTrackTwo();
		setSpeed(75);
		break;
		
		case 3:
		// Kør fremad op ad bakke
		PlayTrackTwo();
		setSpeed(100);
		break;
		
		case 4:
		// Kør fremad ned ad bakke
		PlayTrackTwo();
		setSpeed(25);
		break;
		
		case 5:
		// Kør fremad
		PlayTrackTwo();
		setSpeed(100);
		break;
		
		case 6:
		// Stop, begynd at kør baglæns
		PlayTrackTwo();
		stop();
		backward(100);
		break;
		
		case 7:
		// Kør baglæns (refleksbrik 6)
		PlayTrackTwo();
		setSpeed(75);
		break;
		
		case 8:
		// stop, begynd kør fremad (refleksbrik 5)
		PlayTrackTwo();
		stop();
		forward(50);
		break;
		
		case 9:
		//kør fremad (reflekrsbrik 5)
		PlayTrackTwo();
		forward(50);
		break;
		
		case 10:
		// kør fremad (refleksrbik 6)
		PlayTrackTwo();
		forward(100);
		break;
		
		case 11:
		// Stop (refleksbrik 7)
		PlayTrackThree();
		stop();
		break;
		
		default:
		
		break;
	}
}
