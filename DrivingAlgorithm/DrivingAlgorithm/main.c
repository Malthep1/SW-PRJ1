#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000
#include <stdio.h>
#include "LightsControl.h"
#include <util/delay.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include "SoundControl.h"
#include "switch.h"
#include "DrivingAlgortihm.h"


int main(void)
{
//    int state = 0;
//	SetupSOMO();
//	initSwitchPort();
//	InitUART(9600, 8);	
//	bool carStartBtnPressed = false;
//	drivingAlgorihm();
int pwmrate = 0;
initializeMotorControl();
while (1){
		forward(80);
		_delay_ms(300);
		backward(80);
		_delay_ms(300);
	}
}








