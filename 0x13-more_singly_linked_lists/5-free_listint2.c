#include "lists.h"

/**
 * free_listint2 - free
 * @head: adrs
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *n, *p;

	if (!head)
		return;
	n = *head;
	while (n)
	{
		p = n;
		n = n->next;
		free(p);
	}
	*head = NULL;
}
