
#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

//Author: Malthe

void setDirection(int direction);

void forward(int PWMrate);

void backward(int PWMrate);

void stop();

void setSpeed(int PWMrate);

void initializeMotorControl();

#endif /* MOTORCONTROL_H_ */