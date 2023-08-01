#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find
 * @head: list
 * Return: adrs
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *n;

	if (head == NULL)
		return (NULL);
	for (n = head->next; n != NULL; n = n->next)
	{
		if (n == n->next)
			return (n);
		for (p = head; p != n; p = p->next)
			if (p == n->next)
				return (n->next);
	}
	return (NULL);
}
