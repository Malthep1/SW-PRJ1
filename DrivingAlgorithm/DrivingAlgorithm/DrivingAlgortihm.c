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
		forward(100);
		break;
		
		case 2:
		// K�r fremad
		playTrack(1);
		setSpeed(75);
		break;
		
		case 3:
		// K�r fremad op ad bakke
		playTrack(1);
		setSpeed(100);
		break;
		
		case 4:
		// K�r fremad ned ad bakke
		playTrack(1);
		setSpeed(25);
		break;
		
		case 5:
		// K�r fremad
		playTrack(1);
		setSpeed(100);
		break;
		
		case 6:
		// Stop, begynd at k�r bagl�ns
		playTrack(1);
		stop();
		backward(100);
		break;
		
		case 7:
		// K�r bagl�ns (refleksbrik 6)
		playTrack(1);
		setSpeed(75);
		break;
		
		case 8:
		// stop, begynd k�r fremad (refleksbrik 5)
		playTrack(1);
		stop();
		forward(50);
		break;
		
		case 9:
		//k�r fremad (reflekrsbrik 5)
		playTrack(1);
		forward(50);
		break;
		
		case 10:
		// k�r fremad (refleksrbik 6)
		playTrack(1);
		forward(100);
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
