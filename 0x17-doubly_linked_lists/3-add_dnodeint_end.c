#include "lists.h"
/**
 * add_dnodeint_end - add a new node to the end of the list
 * @head: pointer to head of the list
 * @n: new node value
 * Return: address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->next = NULL;

	dlistint_t *it = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (it->next)
		it = it->next;

	it->next = new;
	new->prev = it;
	return (new);
}
