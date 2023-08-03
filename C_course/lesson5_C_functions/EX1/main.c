/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Mohanad Magdy
 */
//Function to print prime numbers
#include<stdio.h>

void prime_numbers(int start, int end);

int main()
{
	int start,end;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d",&start, &end);
	prime_numbers(start, end);

	return 0;
}

void prime_numbers(int start, int end)
{
	int i,j;
	for(i = start; i<= end; i++)
	{
		for(j = 2; j<=i; j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf(" %d ",i);
		}
	}
}
