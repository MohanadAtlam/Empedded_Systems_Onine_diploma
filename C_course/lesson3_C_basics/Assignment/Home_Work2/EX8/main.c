/*
 * main.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mohanad Magdy
 */

//C program to make a simple calculator

#include<stdio.h>

int main()
{
	char operator;
	float op1,op2;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);		fflush(stdout);
	scanf("%c",&operator);

	switch(operator)
	{
	case '+':
		printf("Enter two operands : \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f %f",&op1,&op2);

		printf("%.2f + %.2f = %.2f",op1,op2,op1+op2);
		break;

	case '-':
		printf("Enter two operands : \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f %f",&op1,&op2);

		printf("%.2f - %.2f = %.2f",op1,op2,op1-op2);
		break;

	case '*':
		printf("Enter two operands : \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f %f",&op1,&op2);

		printf("%.2f * %.2f = %.2f",op1,op2,op1*op2);
		break;

	case '/':
		printf("Enter two operands : \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f %f",&op1,&op2);

		printf("%.2f / %.2f = %.2f",op1,op2,op1/op2);
		break;

	default:
		printf("Wrong choice");
		break;
	}


	return 0;
}

