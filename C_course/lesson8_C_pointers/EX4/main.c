#include<stdio.h>

int main(void)
{
	int num_arr[15];
	int size = 0;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d",&size);

	printf("Input %d number of elements in the array : \n",size);
	for(int i = 0; i < size; i++)
	{
		printf("element - %d : ",i+1);
		scanf("%d",num_arr+i);
	}

	int *ptr = num_arr;
	printf("The elements of array in reverse order are : \n"); 
	for(int i = size -1; i >= 0; i--)
		printf("element - %d : %d \n",i+1,*(ptr+i));
	return 0;
}