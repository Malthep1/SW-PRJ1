#include "uart.h"
#include "SoundControl.h"
#include <stdio.h>
#include <stdlib.h>

void SetupSOMO(){
	
	InitUART(9600, 8); // InitUart 9600 baudrate 8 databit	
	SetVolumeMax();
}

void SetVolumeMax(){
	SendChar(0x7E);
	SendChar(0x06);
	SendChar(0x00);
	SendChar(0x00);
	SendChar(0x1E);
	SendChar(0xFF);
	SendChar(0xDC);
	SendChar(0xEF);
}

void PlayTrackOne(){
	SendChar(0x7E);
	SendChar(0x03);
	SendChar(0x00);
	SendChar(0x00);
	SendChar(0x01);
	SendChar(0xFF);
	SendChar(0xFC);
	SendChar(0xEF);
}
void PlayTrackTwo(){
	SendChar(0x7E);
	SendChar(0x03);
	SendChar(0x00);
	SendChar(0x00);
	SendChar(0x02);
	SendChar(0xFF);
	SendChar(0xFB);
	SendChar(0xEF);
}
void PlayTrackThree(){
	SendChar(0x7E);
	SendChar(0x03);
	SendChar(0x00);
	SendChar(0x00);
	SendChar(0x03);
	SendChar(0xFF);
	SendChar(0xFD);
	SendChar(0xEF);
}
