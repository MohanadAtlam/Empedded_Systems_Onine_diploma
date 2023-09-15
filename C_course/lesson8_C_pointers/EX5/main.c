#include<stdio.h>

typedef struct employee
{
	char name[20];
	int id;
}employee_t;

int main()
{
	employee_t data = {"Alex",1002};
	employee_t *(p_arr[5]);
	p_arr[0] = &data;

	employee_t **f_ptr = &p_arr[0];
	printf("Employee name : %s \n",*f_ptr -> name);
	printf("Employee ID : %d \n",*f_ptr -> id);
	return 0;
}