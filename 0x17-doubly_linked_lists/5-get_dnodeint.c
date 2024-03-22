#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of doubly linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: address of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
