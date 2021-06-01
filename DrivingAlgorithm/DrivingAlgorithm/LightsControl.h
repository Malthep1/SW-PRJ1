#pragma once
#include "uart.h"

void turnOnFL();

void turnOnBL(char state); // state er enten normal eller bremse, fx N og B

void setIntensity(int intensity); // intensity er Duty cycle fra 0-100

