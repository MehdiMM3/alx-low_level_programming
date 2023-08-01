#include "lists.h"

/**
 * insert_nodeint_at_index - insert
 * @head: adrs
 * @idx: index
 * @n: value
 * Return: adrs
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1, *node2 = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !node2)
		return (NULL);

	node2->n = n;
	node2->next = NULL;
	if (!idx)
	{
		node2->next = *head;
		*head = node2;
		return (node2);
	}
	node1 = *head;
	while (node1)
	{
		if (x == idx - 1)
		{
			node2->next = node1->next;
			node1->next = node2;
			return (node2);
		}
		x++;
		node1 = node1->next;
	}
	free(node2);
	return (NULL);
}
