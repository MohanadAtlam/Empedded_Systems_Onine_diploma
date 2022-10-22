/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Mohanad Magdy
 */
#include <stdio.h>

int main()
{
	int x,y;

	printf("Enter 2 integers : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("sum : %d \n",x+y);

	return 0;
}
