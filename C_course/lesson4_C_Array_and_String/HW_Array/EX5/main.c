/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Mohanad Magdy
 */

//C program to search an element
#include <stdio.h>

#define ARRAY_SIZE		20//adjust the array size here

int main()
{
	int array[ARRAY_SIZE];
	int element_number,counter,search_element;
	printf("Enter no of elements : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&element_number);

	for(counter=0;counter<element_number;counter++)
	{
		array[counter]=(counter+1)*11;
		printf("%d	",array[counter]);
	}

	printf("\nEnter the element to e searched : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&search_element);

	for(counter=0;counter<element_number;counter++)
	{
		if(array[counter]==search_element)
		{
			printf("Number found at the location = %d \n",counter+1);
			break;
		}
	}
	if(counter==element_number)
	{
		printf("Element not found \n");
	}
	return 0;
}
