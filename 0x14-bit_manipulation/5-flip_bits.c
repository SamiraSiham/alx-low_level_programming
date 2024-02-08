#include "main.h"

/**
 * flip_bits - flip bits to switch two numbers
 * @n1: first number
 * @n2: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	unsigned long int res = n1 ^ n2;
	int count = 0;

	while (res)
	{
		count += res & 1;
		res = res >> 1;
	}
	return (count);
}
