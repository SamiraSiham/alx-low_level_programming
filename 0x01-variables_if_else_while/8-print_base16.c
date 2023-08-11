#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char T[] = "0123456789abcdef";
int i = 0;
while (T[i] != '\0')
{
	putchar(T[i]);
	i++;
}
putchar('\n');
return (0);
}
