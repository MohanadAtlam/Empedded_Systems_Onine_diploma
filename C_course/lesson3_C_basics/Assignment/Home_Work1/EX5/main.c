/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Mohanad Magdy
 */
#include <stdio.h>

int main()
{

	char ip_char;
	printf("Enter a character : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&ip_char);

	printf("the ASCII code of %c = %d",ip_char,ip_char);

	return 0;
}
