#include <avr/io.h>
#define F_CPU 16000000
#include <stdio.h>
#include <stdbool.h>
#include <util/delay.h>
#include "LightsControl.h"


int main(void)
{
//	int state = 0;
//	SetupSOMO();
//	initSwitchPort();
//	InitUART(9600, 8);
//	bool carStartBtnPressed = false;
//	drivingAlgorihm();
	initLightPins();
	_delay_ms(1000);
	TurnOnFL();
	_delay_ms(1000);
	TurnonBL();
	_delay_ms(2000);
	setintensity(100);
	_delay_ms(2000);
	setintensity(200);
	_delay_ms(1000);
	turnOff();
}








