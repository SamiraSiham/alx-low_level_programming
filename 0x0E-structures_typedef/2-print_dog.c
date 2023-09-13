#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the struct dog to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = 0.00;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
