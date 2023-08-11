#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char T[] = "abcdefghijklmnopqrstuvwxyz";
while (T[i] != '\0')
{
	if (T[i] == 'q' || T[i] == 'e')
	{
		i++;
		continue;
	}
	putchar(T[i]);
	i++;
}
putchar('\n');
return (0);
}
