
#ifndef LIGHTSCONTROL_H_
#define LIGHTSCONTROL_H_
#include "uart.h"

void turnOnFL();

void turnOnBL(char state); // state er enten normal eller bremse, fx N og B

void setIntensity(int intensity); // intensity er Duty cycle fra 0-100

#endif /* LIGHTSCONTROL_H_ */