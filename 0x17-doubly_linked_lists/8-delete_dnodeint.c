#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *it = *head;

	if (!*head)
		return (-1);
	for (; index != 0; index--)
	{
		if (!it)
			return (-1);
		it = it->next;
	}
	if (it == *head)
	{
		*head = it->next;
		if (!*head)
			(*head)->prev = NULL;
	}
	else
	{
		it->prev->next = it->next;
		if (!it->next)
			it->next->prev = it->prev;
	}
	free(it);
	return (1);
}
