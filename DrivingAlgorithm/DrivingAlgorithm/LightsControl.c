/*
* lightscontrol.c
*
* Created: 03-06-2021 16:36:06
*  Author: Khaalid & Malthe
*/
#include <avr/io.h>
#include <stdlib.h>
#include "lightscontrol.h"
#define F_CPU 16000000
#include <util/delay.h>
#include <stdbool.h>


void initLightPins(){
	DDRB |= (1 << PB2);
	DDRB |= (1 << PB3);
	DDRB |= (1 << PB4);
	DDRB |= (1 << PB5);

}


void TurnOnFL(){
	
	PORTB |= (1 << PB4);
	PORTB |= (1 << PB5);
	
	
}


void TurnonBL(){
	
	
	PORTB |= (1 << PB2);
	PORTB |= (1 << PB3);
	
	TCCR1A = 0b10000011;
	
	TCCR1B = 0b00000001;
	
	OCR1A = 100;
	
}


void setintensity(){
	
	DDRB =  0b00110000;  // PORTB bliver sat til udgang
	PORTB = 0b00110000; // PB5 og PB4 (pin 10 og 11 på arduiono 2560) bliver tændt (PB5 pin 11 skal baglyset tilsluttes og PB4 pin 10 (forlyset).
	
	TCCR1A = 0b10000011;
	
	TCCR1B = 0b00000001;
	

	OCR1A = 200;
	
	_delay_ms(1000);
	
	OCR1A = 1023;

	
}



void turnOff(){
		
		PORTB &= ~(1 << PB2);
		PORTB &= ~(1 << PB3);
		PORTB &= ~(1 << PB4);
		PORTB &= ~(1 << PB5);
}



