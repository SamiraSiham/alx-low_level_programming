#include "main.h"

/**
 * get_bit - get the bit at the specified index
 * @num: number to index
 * @index: bit to get
 *
 * Return: the bit state or -1 if there is an error
 */

int get_bit(unsigned long int num, unsigned int index)
{
	if (index >= sizeof(num) * 8)
		return (-1);
	return (num >> index && 1);
}
