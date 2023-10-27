#include "main.h"

/**
 * get_bit - get value of a bit at an index
 *@n: number
 *@i: index
 *Return: value of bit on index, -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int i)
{
	unsigned long int hold;

	if (i > 64)
		return (-1);

	hold = n >> i;

	return (hold & 1);
}
