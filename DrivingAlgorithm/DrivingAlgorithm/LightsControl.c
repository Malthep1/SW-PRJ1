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



void turnOnFL()

{
	
	DDRB = (1 << 4);  // PORTB bliver sat til udgang
	PORTB = (1 << 4); // PB5 (pin 10 på arduiono 2560) bliver tændt
		
}


turnOnBL(int state)

{
	
	DDRB = (1 << 5);  // PORTB bliver sat til udgang
	PORTB = (1 << 5); // PB5 (pin 10 på arduiono 2560) bliver tændt
	
	TCCR1A = 0b10000011;
	
	TCCR1B = 0b00000001;
	
	
	OCR1A = state;
	
	
	if (state == 1023)
	{
		_delay_ms(1000);
		
		OCR1A = 205;
	}

	
	
}

void offIntensity(bool off)

{
	
	
	if (off = true)
	{
		
		DDRB = 0b00000000;  // PORTB bliver sat til udgang
		PORTB = 0b0000000; // PB5 (pin 10 på arduiono 2560) bliver tændt
		
		
		}else  {
			
			
			//forlys
			
			DDRB = 0b00010000; 
			PORTB = 0b0010000; // PB4 (pin 10 på arduiono 2560) bliver tændt
			
			
			//baglys
			
			DDRB = 0b00100000;  
			PORTB = 0b0010000; // PB5 (pin 11 på arduiono 2560) bliver tændt
		}	
		
	
	
	
	
}









