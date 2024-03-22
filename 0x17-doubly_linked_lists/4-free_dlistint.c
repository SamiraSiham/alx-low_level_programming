#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *it;

	while (head)
	{
		it = head;
		head = head->next;
		free(it);
	}
}
