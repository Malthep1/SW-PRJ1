#include "uart.h"
#include "SoundControl.h"
#include <stdio.h>
#include <stdlib.h>
#define F_CPU 16000000
#include <util/delay.h>
// se note ift. checksum i oneNote



unsigned char CMD = 0x00;
unsigned char Feedback = 0x00;
unsigned char Para1 = 0x00;
unsigned char Para2 = 0x00;
unsigned short checksum = 0xFFFF;
unsigned char checksum1 = 0x00;
unsigned char checksum2 = 0x00;


void SetupSOMO(){
	initUARTnew();	
	_delay_ms(1000);
	SetVolume(15);
	_delay_ms(1000);
}

void SetVolume(char volume)/*volumen 0-30*/{
		CMD = 0x06;
		Feedback = 0x00;
		Para1 = 0x00;
		Para2 = volume;
		checksum = (0xFFFF - (CMD + Feedback + Para1 + Para2)+1);		
		checksum1 = (checksum>>8) & 0xFF;
		checksum2 = (checksum) & 0xFF;
		
		SendChar(0x7E);
		SendChar(CMD);
		SendChar(Feedback);
		SendChar(Para1);
		SendChar(Para2);
		SendChar(checksum1);
		SendChar(checksum2);
		SendChar(0xEF);
}
void playTrack(char trackNumber)/*1 = refleksbrik, 2 = startmelodi, 3 = slutmelodi*/{
		CMD = 0x03;
		Feedback = 0x00;
		Para1 = 0x00;
		Para2 = trackNumber;
		checksum = (0xFFFF - (CMD+Feedback+Para1+Para2)+1);
		checksum1 = (checksum>>8) & 0xFF;
		checksum2 = (checksum) & 0xFF;
		SendChar(0x7E);
		SendChar(CMD);
		SendChar(Feedback);
		SendChar(Para1);
		SendChar(Para2);
		SendChar(checksum1);
		SendChar(checksum2);
		SendChar(0xEF);
		_delay_ms(1000);
}
