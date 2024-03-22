#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *it = head;
	
	while(it)
	{
		dlistint_t tmp = it;
		it = it->next;
		free(tmp);
	}
}
