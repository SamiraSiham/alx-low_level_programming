#include "main.h"

/**
 * print_binary - print number as a binary string
 * @num: number to print as binary
 *
 * Return: void
 */
void print_binary(unsigned long int num)
{
	int bit = sizeof(num) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
	if (!printed)
		_putchar('0');
}
