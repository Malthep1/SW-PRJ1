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
		playTrack(2);
		forward();
		setSpeed(50);
		break;
		
		case 2:
		// Kør fremad
		playTrack(1);
		forward();
		setSpeed(75);
		break;
		
		case 3:
		// Kør fremad op ad bakke
		playTrack(1);
		forward();
		setSpeed(100);
		break;
		
		case 4:
		// Kør fremad ned ad bakke
		playTrack(1);
		forward();
		setSpeed(25);
		break;
		
		case 5:
		// Kør fremad
		playTrack(1);
		forward();
		setSpeed(100);
		break;
		
		case 6:
		// Stop, begynd at kør baglæns
		playTrack(1);
		stop();
		backward();
		setSpeed(50);
		break;
		
		case 7:
		// Kør baglæns (refleksbrik 6)
		playTrack(1);
		backward();
		setSpeed(75);
		break;
		
		case 8:
		// stop, begynd kør fremad (refleksbrik 5)
		playTrack(1);
		stop();
		forward();
		setSpeed(50);
		break;
		
		case 9:
		//kør fremad (reflekrsbrik 5)
		playTrack(1);
		forward();
		setSpeed(100);
		break;
		
		case 10:
		// kør fremad (refleksrbik 6)
		playTrack(1);
		forward();
		setSpeed(100);
		break;
		
		case 11:
		// Stop (refleksbrik 7)
		playTrack(3);
		stop();
		break;
		
		default:
		
		break;
	}
}
