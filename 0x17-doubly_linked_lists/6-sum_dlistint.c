#include "lists.h"
/**
 * sum_dlistint - count the sum of data in doubly linked list
 * @head: pointer to head of list
 * Return: sum of values, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *it = head;
	unsigned int sum = 0;

	while (it)
	{
		sum += it->n;
		it = it->next;
	}
	return (sum);
}
