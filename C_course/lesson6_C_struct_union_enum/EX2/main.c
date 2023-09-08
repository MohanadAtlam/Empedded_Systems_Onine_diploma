//C program to Add two distances in inch feet system
#include<stdio.h>

typedef struct Senglishsystem
{
	int feet;
	float inch;
}Senglishsystem;

int main(void)
{
	Senglishsystem d1,d2,sum;

	printf("Enter the information of 1st distance:");
	printf("feet: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&d1.feet);

	printf("inch: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&d1.inch);

	printf("Enter the information of 2nd distance:");
	printf("feet: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&d2.feet);

	printf("inch: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	while(sum.inch > 12)
	{
		sum.inch -= 12;
		sum.feet++;
	}
	printf("Sum of distances = %d'-%.2f\"",sum.feet,sum.inch);

	return 0;
}
