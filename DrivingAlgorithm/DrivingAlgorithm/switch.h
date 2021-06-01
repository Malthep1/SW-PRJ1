/**********************************************************
* "Switch.h"                                              *
* Header file for "Mega2560 I/O Shield" SWITCH driver.    *
* Henning Hargaard, 23/9 2015                             *
***********************************************************/
#pragma once
void initSwitchPort();
unsigned char switchStatus();
unsigned char switchOn(unsigned char switch_nr);
/**********************************************************/