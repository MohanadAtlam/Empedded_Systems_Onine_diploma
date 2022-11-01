/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Mohanad Magdy
 */
//C code to take n number of elements from a user stores it in an array
//then calculate the average of those elements


#include<stdio.h>

#define NUMBER_OF_ELEMENTS		20 //You can adjust the size of the array here

int main()
{
	float ip_data_array[NUMBER_OF_ELEMENTS];
	float arr_sum=0,op_avg;
	int Element_Counter,ip_elemnet_number;

	printf("Enter the number of data : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&ip_elemnet_number);


	for(Element_Counter=0;Element_Counter<ip_elemnet_number;Element_Counter++)
	{
		printf("%d. Enter number: ",Element_Counter+1);
		fflush(stdin);		fflush(stdout);
		scanf("%f",&ip_data_array[Element_Counter]);
		arr_sum+=ip_data_array[Element_Counter];
	}
	op_avg=arr_sum/ip_elemnet_number;
	printf("Average = %.2f \n",op_avg);

	return 0;
}
