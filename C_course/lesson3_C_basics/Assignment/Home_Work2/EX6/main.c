/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */
#include <stdio.h>

int main()
{
	unsigned int ip_int,sum=0;

	printf("Enter an integer : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&ip_int);

	while(ip_int !=0)
	{
		sum+=ip_int;
		ip_int--;
	}
	printf("Sum = %d",sum);
	return 0;
}
