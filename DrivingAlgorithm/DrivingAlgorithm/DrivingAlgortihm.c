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
		//Afspille firstTrack, k�r fremad
		PlayTrackOne();
		forward();
		setSpeed(50);
		break;
		
		case 2:
		// K�r fremad
		PlayTrackTwo();
		forward();
		setSpeed(75);
		break;
		
		case 3:
		// K�r fremad op ad bakke
		PlayTrackTwo();
		forward();
		setSpeed(100);
		break;
		
		case 4:
		// K�r fremad ned ad bakke
		PlayTrackTwo();
		forward();
		setSpeed(25);
		break;
		
		case 5:
		// K�r fremad
		PlayTrackTwo();
		forward();
		setSpeed(100);
		break;
		
		case 6:
		// Stop, begynd at k�r bagl�ns
		PlayTrackTwo();
		stop();
		backward();
		setSpeed(50);
		break;
		
		case 7:
		// K�r bagl�ns (refleksbrik 6)
		PlayTrackTwo();
		backward();
		setSpeed(75);
		break;
		
		case 8:
		// stop, begynd k�r fremad (refleksbrik 5)
		PlayTrackTwo();
		stop();
		forward();
		setSpeed(50);
		break;
		
		case 9:
		//k�r fremad (reflekrsbrik 5)
		PlayTrackTwo();
		forward();
		setSpeed(100);
		break;
		
		case 10:
		// k�r fremad (refleksrbik 6)
		PlayTrackTwo();
		forward();
		setSpeed(100);
		break;
		
		case 11:
		// Stop (refleksbrik 7)
		PlayTrackThree();
		stop()
		break;
		
		default:
		
		break;
}
