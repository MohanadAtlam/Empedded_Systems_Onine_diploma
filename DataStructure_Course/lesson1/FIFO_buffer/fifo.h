/*
 * fifo.h
 *
 *  Created on: Nov 23, 2023
 *      Author: Mohanad Atlam
 *
 *      generic type FIFO as u can use the type u require
 *      can be used with arrays and dynamic allocation
 *      because it requires sequential addresses
 *      with 5 APIs
 *      1- initialization of the FIFO
 *      2- enqueue (insert) new element
 *      3- dequeue (delete) first in element
 *      4- check if FIFO full
 *      5- print all FIFO elements
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdio.h>
#include <stdint.h>

//User configurations
//Select elements type ex(uint8_t, uint16_t, uint32_t, ...)
#define ELEMENT_TYPE	uint8_t	/*  <-- change here*/

//create buffer
#define WIDTH			5
ELEMENT_TYPE Test_buffer[WIDTH];

//FIFO data types
typedef struct{
	unsigned int length;
	unsigned int count;

	ELEMENT_TYPE* base;
	ELEMENT_TYPE* tail;
	ELEMENT_TYPE* head;
}FIFO_TYPE_t;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_BUF_STATUS;

//APIs
FIFO_BUF_STATUS FIFO_Init(FIFO_TYPE_t* fifo, ELEMENT_TYPE* buf, unsigned int length);
FIFO_BUF_STATUS FIFO_Enqueue(FIFO_TYPE_t* fifo, ELEMENT_TYPE item);
FIFO_BUF_STATUS FIFO_Dequeue(FIFO_TYPE_t* fifo, ELEMENT_TYPE* item);
FIFO_BUF_STATUS FIFO_IsFull(FIFO_TYPE_t* fifo);
void FIFO_Print(FIFO_TYPE_t* fifo);


#endif /* FIFO_H_ */
