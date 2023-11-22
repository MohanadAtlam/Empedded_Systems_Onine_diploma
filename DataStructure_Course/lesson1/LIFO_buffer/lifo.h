/*
 *	A LIFO (Last In First Out) project
 *	Its dealing with unsigned integer values only
 *	its also viable with only arrays and dynamic allocations
 *	3 APIs
 *	1- to initialize the LIFO
 *	2- to add an item to the LIFO
 *	3- to pop an item from the LIFO
 */

#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdlib.h>

//type definitions
typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int *base;
	unsigned int *head;
}LIFO_BUF_t;

typedef enum
{
	LIFO_no_error,	/*no error: 0*/
	LIFO_full,		/*full LIFO: 1*/
	LIFO_empty,		/*empty LIFO: 2*/
	LIFO_null		/*LIFO not found: 3*/
}LIFO_status;

//APIs
LIFO_status LIFO_Init(LIFO_BUF_t* lifo_buf, unsigned int* buf, unsigned int length);	//initialize
LIFO_status LIFO_Add_item(LIFO_BUF_t* lifo_buf, unsigned int item);			//add item/s
LIFO_status LIFO_Get_item(LIFO_BUF_t* lifo_buf, unsigned int* item);			//pop last item/s


#endif /* LIFO_H_ */
