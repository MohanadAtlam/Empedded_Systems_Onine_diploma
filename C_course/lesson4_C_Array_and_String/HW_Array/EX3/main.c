/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Mohanad Magdy
 */
//C code asks the user to enter a matrix and display its transpose
#include<stdio.h>

#define MATRIX_ROWS				20//you can adjust the array size here
#define MATRIX_COLUMNS			20//you can adjust the array size here


int main()
{
	int row_number,column_number;
	int row_counter,column_counter;
	float ip_matrix[MATRIX_ROWS][MATRIX_COLUMNS];

	printf("Enter rows and columns of matrix : \n");
	fflush(stdin);		fflush(stdout);
	scanf("%d%d",&row_number,&column_number);

	printf("Enter Elements of matrix : \n");
	for(row_counter=0;row_counter<row_number;row_counter++)
	{
		for(column_counter=0;column_counter<column_number;column_counter++)
		{
			printf("Enter elements a%d%d : ",row_counter+1,column_counter+1);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&ip_matrix[row_counter][column_counter]);
		}
	}
	printf("Entered Matrix : \n");
	for(row_counter=0;row_counter<row_number;row_counter++)
		{
			for(column_counter=0;column_counter<column_number;column_counter++)
			{
				printf("%.1f \t",ip_matrix[row_counter][column_counter]);
			}
			printf("\n");
		}

	printf("Transpose of Matrix : \n");
	for(column_counter=0;column_counter<column_number;column_counter++)
		{
		for(row_counter=0;row_counter<row_number;row_counter++)
			{
				printf("%.1f \t",ip_matrix[row_counter][column_counter]);
			}
			printf("\n");
		}

	return 0;
}
