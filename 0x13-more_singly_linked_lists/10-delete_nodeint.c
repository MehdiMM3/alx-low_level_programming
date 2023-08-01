#include "lists.h"

/**
 * delete_nodeint_at_index - delete
 * @head: adrs
 * @index: index
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *p;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		n = *head;
		*head = (*head)->next;
		free(n);
		return (1);
	}
	n = *head;
	while (n)
	{
		if (i == index)
		{
			p->next = n->next;
			free(n);
			return (1);
		}
		i++;
		p = n;
		n = n->next;
	}
	return (-1);
}
