#include<stdio.h>
#include<string.h>

int main(void)
{
	char string_ip[20];
	printf("Input a string :");
	gets(string_ip);

	int length = strlen(string_ip);
	char *ptr = string_ip;

	printf("Reverse of the string is : ");

	for(int i = length - 1; i >= 0; i--)
		printf("%c",*(ptr+i));

	return 0;
}