#include "lists.h"

/**
 * dlistint_len - returns the numb
 * @h: pointer
 * Return: the numb
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t tf = 0;
	
	while (h != NULL)
	{
		tf++;
		h = h->next;
	}
	
	return (tf);
}
