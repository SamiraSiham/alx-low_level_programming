#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at the given index
 * @num: pointer to the decimal number
 * @index: index position to clear
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*num &= ~(1UL << index);
	return (1);
}
