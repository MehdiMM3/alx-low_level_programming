#include "lists.h"

/**
 * sum_listint - return
 * @head: pointer
 * Return: s
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
