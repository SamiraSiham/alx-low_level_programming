#include "lists.h"
/**
 * print_dlistint - print all the elements of dlistint_t list
 * h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *it = h;
	int count = 0;

	while (it != NULL)
	{
		printf("%d\n", it->n);
		it = it->next;
		count++;
	}
	return count;
}
