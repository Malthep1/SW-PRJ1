#include "MotorControl.h"
#include <avr/io.h>
#include <avr/interrupt.h>

//Author: Malthe
double dutyCycle = 0;
double convertDutyCycle(double PWMrate){
	dutyCycle = (PWMrate/100)*255;
}

void setDirection(int direction){
	if (direction == 1) {
		PORTB |= (1 << 2);
	}
	else if (direction == 0){
		PORTB &= ~(1 << 2);
	}
	else {}
}

void forward(double PWMrate){
	setDirection(0);
	dutyCycle = convertDutyCycle(PWMrate);
}

void backward(double PWMrate){
	setDirection(1);
	dutyCycle = convertDutyCycle(PWMrate);
}

void stop(){
	dutyCycle = 0;
}

void setSpeed(double PWMrate){
	dutyCycle = convertDutyCycle(PWMrate);
}

//Inits output PWM on pin PB7
//Inits output HIGH or LOW on pin PB2
void initializeMotorControl(){
	sei();
	DDRB |= (1 << 7);
	DDRB |= (1 << 2);
	TCCR0A |= (1 << 7) | (1 << 1) | (1 << 0);
	TIMSK0 |= (1 << 0);
	TCCR0B = (1 << 0) | (1 << 3);

}

ISR(TIMER0_OVF_vect){
	OCR0A = dutyCycle;
}