#include "lists.h"

/**
 * pop_listint - pop the head
 * @head: adrs
 * Return: the value
*/
int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);
	x = (*head)->next;
	y = (*head)->y;
	free(*head);
	*head = x;
	return (y);
}
