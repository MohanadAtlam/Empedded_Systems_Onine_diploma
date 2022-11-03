/*
 * main.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mohanad Magdy
 */
//C program to find the length of a string
#include<stdio.h>

#define ARRAY_SIZE		50

int main()
{
	char ip_string[ARRAY_SIZE];
	int string_counter=0,loob_counter=0;

	printf("Enter a String : ");
	fflush(stdin);		fflush(stdout);
	gets(ip_string);

	while(ip_string[string_counter]!=0)
	{
		loob_counter++;
		string_counter++;
	}

	printf("Length of srting : %d",loob_counter);

	return 0;
}

