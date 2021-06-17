#pragma once
#include "uart.h"
#include <avr/io.h>
#include <stdlib.h>

void SetupSOMO();

void playTrack(char trackNumber);

void SetVolume(char volume);