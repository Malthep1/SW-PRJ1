#include <avr/io.h>
#include <stdio.h>


int main(void)
{
    int state = 0;
	SetupSOMO();
	initSwitchPort();
	InitUART(9600, 8);	
	bool carStartBtnPressed = false;
	drivingAlgorihm();
}

