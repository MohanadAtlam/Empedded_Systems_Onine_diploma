/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */

//C program to Find factorial of a number
//Note values more than 12 will cause overflow in integer factorial
#include<stdio.h>

int main()
{
	int ip_int , factorial=1;

	printf("Enter an integer : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&ip_int);

	if(ip_int < 0)
	{
		printf("Error!!! Factorial of negative numbers doesn't exist \n");
	}
	else if(ip_int == 0)
	{
		printf("Factorial = %d \n",factorial);
	}
	else if(ip_int > 12)
	{
		printf("the value u entered will cause an  overflow in the memory");
	}
	else
	{
		while(ip_int > 0)
		{
			factorial = ip_int * factorial;
			ip_int--;
		}
		printf("Factorial = %d \n",factorial);
	}


	return 0;
}
