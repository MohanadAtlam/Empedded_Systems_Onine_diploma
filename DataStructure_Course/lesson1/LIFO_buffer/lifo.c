#include "lifo.h"

LIFO_status LIFO_Add_item(LIFO_BUF_t* lifo_buf, unsigned int item)
{
	//check if LIFO exists
	if(!(lifo_buf->base) || !(lifo_buf->head))
		return LIFO_null;

	//check if LIFO is full using 2 ways
	//if(lifo_buf->head >= (lifo_buf->base + (lifo_buf->length * sizeof(*(lifo_buf->base))))
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full;

	//adding item
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;

	return LIFO_no_error;
}

LIFO_status LIFO_Get_item(LIFO_BUF_t* lifo_buf, unsigned int* item)
{
	//check if LIFO exists
	if(!(lifo_buf->base) || !(lifo_buf->head))
		return LIFO_null;

	//check if LIFO is empty using 2 ways
	//if(lifo_buf->base == lifo_buf->head)
	if(lifo_buf->count == 0)
		return LIFO_empty;

	//popping item
	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;

	return LIFO_no_error;
}

LIFO_status LIFO_Init(LIFO_BUF_t* lifo_buf, unsigned int* buf, unsigned int length)
{
	//check buffer exists or not
	if(buf == NULL)
		return LIFO_null;

	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;

	return LIFO_no_error;
}
