//C Program to Store Information(name, roll and marks)
#include<stdio.h>

typedef struct Sstudent
{
	char name[20];
	int roll_num;
	float degree;
}Sstudent;

int main(void)
{
	Sstudent student;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdin);	fflush(stdout);
	scanf("%s",student.name);

	printf("Enter roll number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&student.roll_num);

	printf("Enter marks: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&student.degree);

	printf("\nDisplaying information: \n");
	printf(" name: %s \n Roll: %d \n Marks: %.2f",student.name,student.roll_num,student.degree);


	return 0;
}
