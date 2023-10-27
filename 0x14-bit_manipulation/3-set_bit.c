#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @i: index, starting from 0
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int i)
{
	if (i >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << i);

	return (1);
}
