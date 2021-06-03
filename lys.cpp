/*
 * Just_testing.cpp
 *
 * Created: 30-05-2021 15:45:19
 *  Author: moham
 */ 


#include <avr/io.h>
#include "Just_testing.h"
#define F_CPU_16000000

using namespace std;

Lys::Lys(){
	
	offBothL_; 
	Break_;
}

Lys::Lys(bool Break, bool offBothL){
	Break_ = Break;
	offBothL_ = offBothL;
	setTurnOffBothL(offBothL);
	setTurnOnFrontL();
	setTurnOnBackL(Break);
	
	/*
	if (Break_ = true)
	{
		// Setup microcontroller for PWM signal 
		setTurnOnBackL(Break_);
	}
	else
	{
		
		setTurnOnBackL(false); 
	}
	*/	
	

	
	
}

// Hvis den er true, t�nder forlys og baglys - hvis den er false, t�nder kun forlys.
void Lys::setTester() 
{
			setTurnOnFrontL();
			setTurnOnBackL(Break_); 
			//setTurnOffBothL(offBothL_);
}



void Lys::setTurnOnBackL(bool Break){
		
	DDRB = 0b00100000;
	PORTB = 0b00100000; // PB ben 5
	TCCR1A = 0b10000011; //Mode = 3 (PWM, Phase Correct, 10 bit) 
	TCCR1B = 0b00000001; //Clock Prescaler = 1, alts� ingen prescaler
	
	if(Break = true){ 
		OCR1A = 1023;
		
	} else if(Break = false) {
		OCR1A = 205; 
	}
	
	Break = Break_;
}

void Lys::setTurnOnFrontL(){
		//TCCR1A = 0b10000011; //Mode = 3 (PWM, Phase Correct, 10 bit)
		//TCCR1B = 0b00000001; //Clock Prescaler = 1, alts� ingen prescaler
		DDRB = 0b00010000; 
		PORTB = 0b00010000; // PB ben 4 (pin 10 p� arduiono 2560) 
		//OCR1B = 1023;
}

void Lys::setTurnOffBothL(bool offBothL){
	if (offBothL = true)
	{
		// Slukker lysdioderne
		DDRB =  0b00000000;
		PORTB = 0b00000000;
		
		} else {
		
		// Forlys
		DDRB =  0b00010000;
		PORTB = 0b00010000;
		
		// Baglys
		DDRB =  0b00100000;
		PORTB = 0b00100000; // PB ben 5
		
		// M�ske?
		// PORTE &= ~(1 << 2);
		//PORTB &= ~(1 << 4);
	}
	
	offBothL_ = offBothL;
	
}

