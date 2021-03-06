/*
 * Sensor_Driver.c
 *
 * Created: 27-05-2021 19:28:34
 *  Author: Frederik
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000
#include <util/delay.h>

volatile unsigned char counter = 0;

ISR (INT0_vect)
{
	counter++;
	EIMSK &= 0b11111100;
	_delay_ms(1000);
	EIFR |= 0b00000011;
	EIMSK |= 0b00000011;
}

ISR (INT1_vect)
{
	counter++;
	EIMSK &= 0b11111100;
	_delay_ms(1000);
	EIFR |= 0b00000011;
	EIMSK |= 0b00000011;
}

void initInterrupt()
{
	sei();
	DDRD = 0;
	EIMSK |= 0b00000011;
	EICRA = 0b00001111;
}

const unsigned char getCounter()
{
	return counter;
}