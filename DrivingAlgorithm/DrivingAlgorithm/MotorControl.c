#include "MotorControl.h"

//Author: Malthe

void forward(int PWMrate){
	digitalWrite(2, LOW)
	analogWrite(1, PWMrate)
}

void backward(int PWMrate){
	digitalWrite(2, HIGH)
	analogWrite(1, PWMrate)
}

void stop(){
	analogWrite(1, 0)
}

void setSpeed(int PWMrate){
	analogWrite(1, PWMrate)
}

void SetDirection(int direction){
	if (direction == 1) {
		digitalWrite(2, HIGH)
	}
	else (direction == 0){
		digitalWrite(2, LOW)
	}
}