#include"uart.h"

//defining the pointer to the UART register in the MC
#define UART0DT *((volatile unsigned int*)((unsigned int*)0x101f1000))

void Uart_sendData(unsigned char* P_tx_string)
{	
	while(*P_tx_string != '\0') //looping in the array 
	{
		UART0DT = (unsigned int)(*P_tx_string);//sending the characters to the register
		P_tx_string++; //increment the pointer to get the next character
	}
}