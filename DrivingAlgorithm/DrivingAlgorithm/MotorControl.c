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
		PORTB |= (1 << PB2);
	}
	else if (direction == 0){
		PORTB &= ~(1 << PB2);
	}
	else {}
}

void forward(int PWMrate){
	setDirection(0);
	dutyCycle = convertDutyCycle(PWMrate);
}

void backward(int PWMrate){
	setDirection(1);
	dutyCycle = convertDutyCycle(PWMrate);
}

void stop(){
	dutyCycle = 0;
}

void setSpeed(int PWMrate){
	dutyCycle = convertDutyCycle(PWMrate);
}

//Inits output PWM on pin PB7
//Inits output HIGH or LOW on pin PB2
void initializeMotorControl(){
	sei();
	DDRB |= (1 << PB7);
	DDRB |= (1 << PB2);
	TCCR0A |= (1 << COM0A1) | (1 << WGM10) | (1 << WGM00);
	TIMSK0 |= (1 << TOIE0);
	TCCR0B = (1 << CS00);

}

ISR(TIMER0_OVF_vect){
	OCR0A = dutyCycle;
}