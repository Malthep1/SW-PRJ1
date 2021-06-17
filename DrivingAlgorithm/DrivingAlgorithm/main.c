#include <avr/io.h>
#include <avr/interrupt.h>
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
	sei();
	initLightPins();
	_delay_ms(1000);
	TurnOnFL();
	_delay_ms(20000);
	TurnonBL();
	_delay_ms(2000);
	setLightIntensity(100);
	_delay_ms(2000);
	setLightIntensity(200);
	_delay_ms(1000);
	turnOff();
}








