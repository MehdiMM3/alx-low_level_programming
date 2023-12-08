#include "lists.h"

/**
 * add_dnodeint - add new node
 * @head: pointer
 * @n: value added to node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnd;

	if (head == NULL)
		return (NULL);
	nnd = malloc(sizeof(dlistint_t));
	if (nnd == NULL)
		return (NULL);
	nnd->n = n;
	nnd->prev = NULL;
	nnd->next = *head;

	if (*head != NULL)
		(*head)->prev = nnd;
	*head = nnd;

	return (nnd);
}
