#include <avr/io.h>
#include <stdio.h>
#define F_CPU 16000000
#include <util/delay.h>
#include "SoundControl.h"
#include "switch.h"
#include "DrivingAlgortihm.h"



int main(void)
{
	initSwitchPort();
	SetupSOMO();
	
	
	
	playTrack(1);
	_delay_ms(1000);
	
	
	
	while (1)
	{
	
	}
}

