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

double dutyCycleLIGHTS = 0;

void initLightPins(){
	DDRB |= (1 << PB3);
	DDRB |= (1 << PB4);
	DDRB |= (1 << PB5);
	DDRB |= (1 << PB6);
	TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11) | (1 << WGM10);
	TIMSK1 |= (1 << TOIE1);
}


void TurnOnFL(){
	PORTB |= (1 << PB3);
	PORTB |= (1 << PB4);
}


void TurnonBL(){
	dutyCycleLIGHTS = 50;
	OCR1A = dutyCycleLIGHTS;
	OCR1B = dutyCycleLIGHTS;
	TCCR1B |= (1 << WGM13) | (1 << WGM12) | (1 << CS10);
}


void setLightIntensity(double newDutyCycle){
	dutyCycleLIGHTS = (newDutyCycle/100.0) * 255.0;
}


void turnOff(){		
		PORTB &= ~(1 << PB3);
		PORTB &= ~(1 << PB4);
		dutyCycleLIGHTS = 0;
}

ISR(TIMER1_OVF_vect){
		OCR1A = dutyCycleLIGHTS;
		OCR1B = dutyCycleLIGHTS;
}