#include "lists.h"
/**
 * add_dnodeint - add a new node to doubly linked list
 * @head: pointer to head of the list
 * @n: value of new node
 * Return: address to the new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
