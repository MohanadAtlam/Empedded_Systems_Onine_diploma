/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Mohanad Magdy
 */
//C program to insert an element in an array

#include <stdio.h>

#define ARRAY_SIZE		20//adjust the array size here

int main()
{
	int array[ARRAY_SIZE];
	int element_number,counter,ins_element,ins_location;
	printf("Enter no of elements : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&element_number);

	for(counter=0;counter<element_number;counter++)
	{
		array[counter]=counter+1;
		printf("%d   ",array[counter]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&ins_element);
	printf("Enter the location : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&ins_location);

   /* counter>=ins_location-1 ??
	* >= so the counter reach array[ins_location]
	* which is shifted by one due to the array starts with 0
	* then i got to correct that shift by -1
	*/
	for(counter=element_number;counter>=ins_location-1;counter--)
		{
			array[counter+1]=array[counter];
		}

	array[ins_location-1]=ins_element;

	for(counter=0;counter<=element_number;counter++)
		printf("%d   ",array[counter]);

	return 0;
}

