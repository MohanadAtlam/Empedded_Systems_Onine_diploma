/*
 * main.c
 *
 *  Created on: Oct 22, 2022
 *      Author: Mohanad Magdy
 */

#include<stdio.h>

int main()
{
	float a,b,temp;

	printf("Enter value of a : ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b : ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&b);

	temp = a;
	a=b;
	b=temp;

	printf("After swapping, value of a : %.2f \n",a);
	printf("After swapping, value of b : %.2f \n",b);

	return 0;
}
