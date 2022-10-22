/*
 * main.c
 *
 *  Created on: Oct 22, 2022
 *      Author: Mohanad Magdy
 */
#include <stdio.h>

int main()
{
	float a,b;

	printf("Enter value of a : ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b : ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping, value of a : %.2f \n",a);
	printf("After swapping, value of b : %.2f \n",b);

	return 0;
}

