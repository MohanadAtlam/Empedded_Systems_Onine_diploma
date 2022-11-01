/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Moahanad Magdy
 */

//C program to find sum of two matrix of order 2*2 using multidimentional array

#include<stdio.h>

#define A_MATRIX	0
#define B_MATRIX	1

int main()
{
	float ip_multidim_arr[2][4];
	float op_arr[4];
	int rowCounter,columncounter,Element_Counter=0;
	printf("Enter Elements of the 1st matrix \n");
	for(rowCounter=0;rowCounter<2;rowCounter++)
	{
		for(columncounter=0;columncounter<2;columncounter++)
		{
			printf("Enter a%d%d : ",rowCounter+1,columncounter+1);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&ip_multidim_arr[A_MATRIX][Element_Counter]);
			Element_Counter++;
		}
	}
	Element_Counter=0;
	printf("Enter Elements of the 2nd matrix \n");
	for(rowCounter=0;rowCounter<2;rowCounter++)
	{
		for(columncounter=0;columncounter<2;columncounter++)
		{
			printf("Enter b%d%d : ",rowCounter+1,columncounter+1);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&ip_multidim_arr[B_MATRIX][Element_Counter]);
			Element_Counter++;
		}
	}

	for(Element_Counter=0;Element_Counter<4;Element_Counter++)
	{
		op_arr[Element_Counter]=ip_multidim_arr[A_MATRIX][Element_Counter]
								+ip_multidim_arr[B_MATRIX][Element_Counter];
	}

 	Element_Counter=0;
	printf("Sum Of Matrix : \n");
	for(rowCounter=0;rowCounter<2;rowCounter++)
		{
			for(columncounter=0;columncounter<2;columncounter++)
			{
				printf("%.2f \t ",op_arr[Element_Counter]);
				Element_Counter++;
			}
			printf("\n");
		}


	return 0;
}
