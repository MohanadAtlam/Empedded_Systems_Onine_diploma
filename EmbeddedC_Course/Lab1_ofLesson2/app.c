#include "uart.h"

unsigned char name[100] = "Mohanad";

int main(int argc, char const *argv[])
{
	Uart_sendData(name);	
	return 0;
}