#include <stdio.h>
#include "main.h"

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("101001010101");
	printf("%u\n", n);
	return (0);
}
