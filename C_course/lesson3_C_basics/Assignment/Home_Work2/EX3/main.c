/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */

#include <stdio.h>

int main()
{

	float x,y,z;
	printf("Enter three numbers : \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if(x>y && x>z)
	{
		printf("Largest number = %.2f \n",x);
	}
	else if(y>z)
	{
		printf("Largest number = %.2f \n",y);
	}
	else{printf("Largest number = %.2f \n",z);}

	return 0;
}

