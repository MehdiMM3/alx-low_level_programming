#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: adrs
 * Return: adrs
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL, *n2 = NULL;

	if (!head || !*head)
		return (NULL);
	n = *head;
	*head = NULL;
	while (n)
	{
		n2 = n->next;
		n->next = *head;
		*head = n;
		n = n2;
	}
	return (*head);
}
