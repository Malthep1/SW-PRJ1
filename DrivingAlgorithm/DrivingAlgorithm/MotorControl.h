
#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

//Author: Malthe

void forward(int PWMrate);

void backward(int PWMrate);

void stop();

void setSpeed(int PWMrate);

void SetDirection(int direction);

#endif /* MOTORCONTROL_H_ */