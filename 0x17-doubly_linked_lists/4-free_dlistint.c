#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fgh;

	while (head != NULL)
	{
		fgh = head;
		head = head->next;
		free(fgh);
	}
}
