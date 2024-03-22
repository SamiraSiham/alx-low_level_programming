#include "lists.h"
/**
 * dlistint_len - count the number of elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
