#include<stdio.h>

int main(void)
{
	char eng_alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr = eng_alphabet;
	int arr_size = sizeof(eng_alphabet)/sizeof(eng_alphabet[0]);

	for(int i = 0; i < arr_size; i++)
	{
		printf(" %c ",*(ptr+i));
	}
	return 0;
}