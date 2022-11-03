/*
 * main.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mohanad Magdy
 */
//C program to reverse string without using library function
#include<stdio.h>
#include<string.h>

#define ARRAY_SIZE		50

int main()
{
	char ip_string[ARRAY_SIZE];
	int length,counter;


	printf("Enter the string  : ");
	fflush(stdin);		fflush(stdout);
	gets(ip_string);

	length = strlen(ip_string);
	if(length==0)
	{
		printf("No string Entered \n");
	}
	else
	{
		printf("Reverse string is : ");
		for(counter = length-1;counter>=0;counter--)
		{
			printf("%c",ip_string[counter]);
		}
	}

	return 0;
}
