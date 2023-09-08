//C program to store information of students
#include<stdio.h>

struct Sstudent
{
	char name[20];
	int roll_num;
	int marks;
};

int main(void)
{
	printf("Enter information of students:\n");

	struct Sstudent student_db[10];
	int counter = 0;
	char choice;
	while(counter < 10)
	{
		printf("for roll number %d:\n",counter+1);
		printf("Enter name: ");
		fflush(stdin);	fflush(stdout);
		scanf("%s",student_db[counter].name);

		printf("Enter marks: ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&student_db[counter].marks);

		student_db[counter].roll_num = counter+1;
		counter++;
choice:
		printf("Want to continue? (y/n): ");
		fflush(stdin);	fflush(stdout);
		scanf("%c",&choice);
		if(choice == 'y')
			continue;
		else if(choice == 'n')
			break;
		else
			goto choice;
	}

	printf("\nDisplaying information for students: \n");

	for(int i = 0; i < counter; i++)
	{
		printf("Information for role number %d:\n",student_db[i].roll_num);
		printf("Name: %s\n",student_db[i].name);
		printf("Marks: %d\n",student_db[i].marks);
	}

	return 0;
}
