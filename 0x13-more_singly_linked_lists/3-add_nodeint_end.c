#include "lists.h"

/**
 * add_nodeint_end - add a node
 * @head: pointer
 * @n: value
 * Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1 = malloc(sizeof(listint_t));
	listint_t *node2;

	if (!head || !node1)
		return (NULL);
	node1->next = NULL;
	node1->n = n;
	if (!*head)
		*head = node1;
	else
	{
		node2 = *head;
		while (node2->next)
			node2 = node2->next;
		node2->next = node1;
	}
	return (node1);
}
