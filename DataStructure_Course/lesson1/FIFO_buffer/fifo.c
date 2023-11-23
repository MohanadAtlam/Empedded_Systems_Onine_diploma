/*
 * fifo.c
 *
 *  Created on: Nov 23, 2023
 *      Author: Mohanad Atlam
 */
#include "fifo.h"


FIFO_BUF_STATUS FIFO_Init(FIFO_TYPE_t* fifo, ELEMENT_TYPE* buf, unsigned int length)
{
	//does buffer exist ?
	if(buf == 0)
		return FIFO_null;

	fifo->base = buf;
	fifo->head = buf;
	fifo->tail = buf;
	fifo->length = length;
	fifo->count = 0;

	return FIFO_no_error;
}

FIFO_BUF_STATUS FIFO_Enqueue(FIFO_TYPE_t* fifo, ELEMENT_TYPE item)
{
	//does FIFO exist ?
	if(!fifo->head || !fifo->base || !fifo->tail)
		return FIFO_null;

	//is it full ?
	if(FIFO_IsFull(fifo) == FIFO_full)
		return FIFO_full;

	*(fifo->head) = item;
	fifo->count++;

	//circular code
	//---------------> if the head at the end return the head to base
	if(fifo->head == (fifo->base + (fifo->length*sizeof(ELEMENT_TYPE)-1)))
		fifo->head = fifo->base;
	//---------------> if the head is not just increment it
	else
		fifo->head++;

	return FIFO_no_error;
}

FIFO_BUF_STATUS FIFO_Dequeue(FIFO_TYPE_t* fifo, ELEMENT_TYPE* item)
{
	//does FIFO exist ?
	if(!fifo->head || !fifo->base || !fifo->tail)
		return FIFO_null;

	//is it empty ?
	if(fifo->count == 0)
		return FIFO_empty;

	*item = *(fifo->tail);
	fifo->count--;

	//circular code
	//---------------> if the tail at the end return the head to base
	if(fifo->tail == (fifo->base + (fifo->length*sizeof(ELEMENT_TYPE))))
		fifo->tail = fifo->base;
	//---------------> if the tail is not just increment it
	else
		fifo->tail++;

	return FIFO_no_error;
}

FIFO_BUF_STATUS FIFO_IsFull(FIFO_TYPE_t* fifo)
{
	//does FIFO exist ?
	if(!fifo->head || !fifo->base || !fifo->tail)
		return FIFO_null;

	//is it full ?
	if(fifo->count == fifo->length)
		return FIFO_full;

	return FIFO_no_error;
}

void FIFO_Print(FIFO_TYPE_t* fifo)
{
	ELEMENT_TYPE* temp = 0;
	//is FIFO empty ?
	if(fifo->count == 0)
		printf("\n=========FIFO is Empty no thing to print=========\n");
	else
	{
		temp = fifo->tail;
		printf("\n=========FIFO print started=========\n");
		for(int i = 0; i < fifo->count; i++)
		{
			//if the temp reached the end of FIFO and didn't reach the head
			if(temp == (fifo->base + (fifo->length*sizeof(ELEMENT_TYPE))))
				temp = fifo->base;
			printf("\t %x \n",*temp);
			temp++;
		}
		printf("\n====================================\n");
	}
}
