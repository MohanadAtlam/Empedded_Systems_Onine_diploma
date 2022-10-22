/*
 * main.c
 *
 *  Created on: Oct 22, 2022
 *      Author: Mohanad Magdy
 */

#include <stdio.h>

int main()
{

	char check_char;

	printf("Enter an alpahbet : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&check_char);

	switch(check_char)
	{
	case 'a':
	case 'o':
	case 'u':
	case 'i':
	case 'e':
	{
		printf("%c is a vowel \n",check_char);
		break;
	}
	default:
	{
		printf("%c is a constant \n",check_char);
		break;
	}
	}

	return 0;
}

