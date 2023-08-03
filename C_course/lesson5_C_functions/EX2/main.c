/*
 * main.c
 *
 *  Created on: Aug 3, 2023
 *      Author: Mohanad Magdy
 */

#include<stdio.h>

int factorial_func(int number);
int main()
{
	int number;
	printf("Enter a positive integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&number);

	printf("Factorial of %d = %d",number,factorial_func(number));

	return 0;
}

int factorial_func(int number)
{
	int result = 1;
	if(number > 1)
	{
		result = number * (number-1);
		result *= factorial_func(number-2);
	}
	return result;
}
