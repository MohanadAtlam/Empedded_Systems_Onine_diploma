/*
 * main.c
 *
 *  Created on: Oct 22, 2022
 *      Author: Mohanad Magdy
 */

#include<stdio.h>

int main()
{

	int check_int ;
	printf("Enter an integer you want to check : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&check_int);

	if(check_int%2)
	{
		printf("%d is odd \n",check_int);
	}
	else
	{
		printf("%d is even \n",check_int);
	}


	return 0;
}

