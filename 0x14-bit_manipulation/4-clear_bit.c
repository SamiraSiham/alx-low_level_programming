#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at index
 * @n: pointer to decimal number
 * @i: index
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	if (i > 64)
		return (-1);

	*n &= ~(1UL << i);
	return (1);
}
