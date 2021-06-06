/*
* lightscontrol.c
*
* Created: 03-06-2021 16:36:06
*  Author: Khaalid
*/
#include <avr/io.h>
#include <stdlib.h>
#include "lightscontrol.h"
#define F_CPU 16000000
#include <util/delay.h>
#include <stdbool.h>



void turnOn()

{
	
	DDRB =  0b00110000;  // PORTB bliver sat til udgang
	PORTB = 0b00110000; // PB5 og PB4 (pin 10 og 11 på arduiono 2560) bliver tændt
	
	OCR1A = 205;
}


setintensity(int state)

{
	
	DDRB =  0b00110000;  // PORTB bliver sat til udgang
	PORTB = 0b00110000; // PB5 og PB4 (pin 10 og 11 på arduiono 2560) bliver tændt (PB5 pin 11 skal baglyset tilsluttes og PB4 pin 10 (forlyset).
	
	TCCR1A = 0b10000011;
	
	TCCR1B = 0b00000001;
	
	
	OCR1A = state;

	
	
	if (state = 205)
	{
		
		OCR1A = 205;
		
		_delay_ms(2000);

		OCR1A = 1023;
		
		
	}


}


void turnOff()

{
	


	DDRB = 0b00000000;  // PORTB bliver sat til udgang
	PORTB = 0b0000000; // PB5 (pin 10 på arduiono 2560) bliver tændt
	
	
	
}









