#include "lists.h"

/**
 * add_dnodeint_end - add new node
 * @head: pointer
 * @n: value added to node
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnd, *adc;

	if (head == NULL)
		return (NULL);

	nnd = malloc(sizeof(dlistint_t));
	if (nnd == NULL)
		return (NULL);

	nnd->n = n;
	nnd->next = NULL;

	if (*head == NULL)
	{
		nnd->prev = NULL;
		*head = nnd;
	}
	else
	{
		adc = *head;
		while (adc->next != NULL)
			adc = adc->next;

		adc->next = nnd;
		nnd->prev = adc;
	}
	return (nnd);
}
