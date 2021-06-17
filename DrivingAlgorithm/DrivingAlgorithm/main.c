#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <util/delay.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include "MotorControl.h"
#include "SoundControl.h"
#include "LightsControl.h"
#include "switch.h"
#include "DrivingAlgortihm.h"


int main(void)
{

SetupSOMO();
initSwitchPort();
InitUART(9600, 8);	
initializeMotorControl();
while (1){
		drivingAlgorihm();
	}
}








