#include "lists.h"

/**
 * sum_dlistint - returns sum
 * @head: pointer
 * Return: the sum "tot"
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
