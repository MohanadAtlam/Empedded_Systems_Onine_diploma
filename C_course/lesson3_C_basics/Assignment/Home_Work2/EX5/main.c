/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */
#include<stdio.h>

int main()
{

	char check_char;
	printf("Enter a character : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&check_char);

	if(check_char >= 65 && check_char <= 90)	//65 is ascii number of A & 90 is ascii number of Z
	{
		printf("%c is an alphabet",check_char);
	}
	else if(check_char >= 97 && check_char <= 122)//97 is ascii number of a & 122 is ascii number of z
	{
		printf("%c is an alphabet",check_char);
	}
	else
	{
		printf("%c is not an alphabet",check_char);
	}

	return 0;
}

