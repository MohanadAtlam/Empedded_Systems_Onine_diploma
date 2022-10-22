/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Mohanad Magdy
 */

#include <stdio.h>

int main()
{

	float x,y;
	printf("Enter two numbers : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);

	printf("Product : %.2f",x*y);

	return 0;
}
