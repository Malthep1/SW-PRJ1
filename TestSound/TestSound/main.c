#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include "SoundControl.h"
#include "uart.h"

int main(void)
{
	SetupSOMO();
	
	SetVolumeMax();
	
    while (1) 
    {
		PlayTrackOne();
		

    }
}

