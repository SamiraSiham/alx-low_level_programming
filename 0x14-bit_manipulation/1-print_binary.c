#include "main.h"

/**
 * print_binary - print binary representation of parameter number
 * @num: the number to be converted to binary
 *
 * Return: void
 */

void print_binary(unsigned long int num)
{
	unsigned long int temp;
	int shifts;

	if (num == 0)
	{
		printf("0");
		return;
	}
	temp = num;
	shifts = 0;

	while ((temp >>= 1) > 0)
		shifts++;

	while (shifts >= 0)
	{
		if ((num >> shifts) & 1)
			printf("1");
		else
			printf("0");
		shifts--;
	}
}
