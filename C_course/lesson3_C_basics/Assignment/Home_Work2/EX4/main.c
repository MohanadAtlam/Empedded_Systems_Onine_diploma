/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */

//check whether the entered number +ve , -ve or 0

#include <stdio.h>


int main()
{

	float sign_check_num;
	printf("Enter a number : \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&sign_check_num);

	if(sign_check_num > 0)
	{
		printf("%.2f  is positive \n",sign_check_num);
	}
	else if(sign_check_num < 0)
	{
		printf("%.2f  is negative \n",sign_check_num);
	}
	else{printf("You Entered a Zero");}

	return 0;
}
