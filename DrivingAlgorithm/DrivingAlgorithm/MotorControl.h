
#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

//Author: Malthe

void setDirection(int direction);

void forward(double PWMrate);

void backward(double PWMrate);

void stop();

void setSpeed(double PWMrate);

void initializeMotorControl();

#endif /* MOTORCONTROL_H_ */