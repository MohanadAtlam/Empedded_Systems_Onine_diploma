/*
 * main.c
 *
 *  Created on: Aug 3, 2023
 *      Author: Mohanad Magdy
 */
#include<stdio.h>
#include<string.h>

void string_reverse(char *string_ip, int str_len, int counter);

int main()
{
	int counter = 0;
	char string_ip[100];
	printf("Enter a sentence: ");
	fflush(stdin);	fflush(stdout);
	gets(string_ip);

	int length = strlen(string_ip);

	string_reverse(string_ip, length, counter);
	printf("%s",string_ip);

	return 0;
}

void string_reverse(char *string_ip, int str_len, int counter)
{
	int middle_index = str_len / 2;
	char temp;
	if(counter < middle_index)
	{
		//-1 as the string starts with index 0
		temp = string_ip[str_len - counter - 1];
		string_ip[str_len - counter - 1] = string_ip[counter];
		string_ip[counter] = temp;
		counter++;
		string_reverse(string_ip, str_len, counter);
	}
}
