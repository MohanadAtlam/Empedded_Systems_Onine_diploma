//C program to find area of a circle using macros
#include<stdio.h>

#define PI				3.14159265
#define CIRCLE_AREA(r)	PI*r*r


int main(void)
{
	float raduis;

	printf("Enter Radius: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&raduis);

	printf("Area= %.2f \n",CIRCLE_AREA(raduis));
	return 0;
}
