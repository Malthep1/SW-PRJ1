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


double scaleDutyCycle(double dutyCycle){
	return (dutyCycle/100.0) * 255.0;
}

void initLightPins(){
	DDRB |= (1 << PB3);
	DDRB |= (1 << PB4);
	DDRB |= (1 << PB5);
	DDRB |= (1 << PB6);

	TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11) | (1 << WGM10);
	TCCR1B |= (1 << WGM13) | (1 << WGM12) | (1 << CS10);
}


void TurnOnFL(){
	
	PORTB |= (1 << PB3);
	PORTB |= (1 << PB4);
	
	
}


void TurnonBL(){
	OCR1A = 60;
	OCR1B = 60;
}


void setintensity(double dutyCycle){
	OCR1A = scaleDutyCycle(dutyCycle);
	OCR1B = scaleDutyCycle(dutyCycle);
}


void turnOff(){
		
		PORTB &= ~(1 << PB3);
		PORTB &= ~(1 << PB4);
		PORTB &= ~(1 << PB5);
		PORTB &= ~(1 << PB6);
			OCR1A = 0;
			OCR1B = 0;
}



