#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: head of list
 * @idx: index of the new node
 * @n: value of new node
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *it = *h;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		it = it->next;
		if (!it)
			return (NULL);
	}
	if (!it->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = it;
	new->next = it->next;
	it->next->prev = new;
	it->next = new;
	return (new);
}
