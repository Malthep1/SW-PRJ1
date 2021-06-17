#define F_CPU 16000000UL
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
#include <time.h>
#include <unistd.h>
#include "MotorControl.h"

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

