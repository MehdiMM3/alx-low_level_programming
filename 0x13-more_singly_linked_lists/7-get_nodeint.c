#include "lists.h"

/**
 * get_nodeint_at_index - return node
 * @head: pointer
 * @index: index
 * Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int y;

	for (x = head, y = 0; x && y < index; x = x->next, y++)
		;
	return (x);
}
