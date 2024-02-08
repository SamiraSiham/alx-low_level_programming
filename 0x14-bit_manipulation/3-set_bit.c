#include "main.h"

/**
 * set_bit - sets value of the specified bit to 1
 * @num: decimal number passed by pointer
 * @index: index position to change
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*num |= (1UL << index);

	return (1);
}
