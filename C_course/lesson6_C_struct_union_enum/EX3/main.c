//C ptogram to add 2 complex numbers
#include<stdio.h>

typedef struct complex_num
{
	float real;
	float imaginary;
}complex_num;

complex_num add_complex (complex_num num1, complex_num num2);

int main(void)
{
	complex_num num1,num2,sum;
	printf("for 1st complex number: \n");
	printf("enter real and imaginary respectively: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f",&num1.real,&num1.imaginary);

	printf("for 2nd complex number: \n");
	printf("enter real and imaginary respectively: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f",&num2.real,&num2.imaginary);

	sum = add_complex(num1, num2);
	printf("sum = %.2f + %.2f i",sum.real,sum.imaginary);

	return 0;
}
complex_num add_complex (complex_num num1, complex_num num2)
{
	complex_num sum;
	sum.real = num1.real + num2.real;
	sum.imaginary = num1.imaginary + num2.imaginary;
	return sum;
}
