#define F_CPU 16000000UL
#include <avr/io.h>
#include <stdio.h>
#include <avr/delay.h>
#include "MotorControl.h"

int main(void)
{
//    int state = 0;
//	SetupSOMO();
//	initSwitchPort();
//	InitUART(9600, 8);	
//	bool carStartBtnPressed = false;
//	drivingAlgorihm();
int pwmrate = 1;
initializeMotorControl();
while (1){
	setDirection(1);
	_delay_ms(100);
	setDirection(0);
	pwmrate += 10;
	if(pwmrate > 100){
		_delay_ms(100000);
		pwmrate = 1;
		stop();	
		_delay_ms(100000);

	}
	setSpeed(pwmrate);
	_delay_ms(100);
	
}
}

