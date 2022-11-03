/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Mohanad Magdy
 */
//C program to find the frequency of chracters in a string
#include<stdio.h>

#define ARRAY_SIZE		50

int main()
{
	char ip_string[ARRAY_SIZE];
	char search_char;
	int counter=0,arr_counter=0;
	printf("Enter a string: ");
	fflush(stdin);		fflush(stdout);
	gets(ip_string);

	printf("Enter a character to find frequency : ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&search_char);

	while(ip_string[arr_counter]!='\0')
	{
		if(ip_string[arr_counter]==search_char )
		{
			counter++;
		}
		arr_counter++;
	}
	if(counter==0)
	{
		printf("This character %c isn't in the string",search_char);
	}
	else{printf("Frequency of %c = %d",search_char,counter);}


	return 0;
}

