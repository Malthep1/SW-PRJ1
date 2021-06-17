#include "MotorControl.h"
#include <avr/io.h>
#include <avr/interrupt.h>

//Author: Malthe

private double convertDutyCycle(int PWMrate){
	return (PWMrate/100)*255;
}

void forward(int PWMrate){
	setDirection(0)
	OCR2A = (convertDutyCycle(PWMrate)/100)*255;)
}

void backward(int PWMrate){
	setDirection(1)
	OCR2A = (convertDutyCycle(PWMrate)/100)*255;
}

void stop(){
	OCR2A = 0;)
}

void setSpeed(int PWMrate){
	OCR2A = (convertDutyCycle(PWMrate)/100)*255;
}

void setDirection(int direction){
	if (direction == 1) {
		digitalWrite(2, HIGH)
	}
	else (direction == 0){
		digitalWrite(2, LOW)
	}
}

//Inits output PWM on pin PB4
//Inits output HIGH or LOW on pin pb5
void initializeMotorControl(){
	DDRB |= (1 << PB7);
	DDRB |= (1 << PB2);
	TCCR0A = (1 << COM2A1) | (1 << WGM10) | (1 << WGM00)
	TCCR0B = (1 << CS00);

}3
