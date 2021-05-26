
#ifndef UART_DRIVER_H_
#define UART_DRIVER_H_

void initUART(unsigned long BaudRate, unsigned char DataBit);

void sendChar(char Tegn);

#endif /* UART_DRIVER_H_ */