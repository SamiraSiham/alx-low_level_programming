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
char D[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (T[i] != '\0')
{
	putchar(T[i]);
	i++;
}
i = 0;
while (D[i] != '\0')
{
	putchar(D[i]);
	i++;
}

putchar('\n');
return (0);
}
