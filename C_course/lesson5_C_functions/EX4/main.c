/*
 * main.c
 *
 *  Created on: Aug 3, 2023
 *      Author: Mohanad Magdy
 */
#include<stdio.h>

int power_func(int base, int power);

int main()
{

	int base, power;
	printf("Enter the base number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer): ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&power);

	printf("%d^%d = %d ",base,power,power_func(base, power));

	return 0;
}

int power_func(int base, int power)
{
	int result = 1;
	if(power >= 1)
	{
		power--;
		result *= base;
		result *= power_func(base, power);

	}
	return result;
}
