#include "lists.h"

/**
 * print_dlistint - elements prints
 * @h: pointer
 * Return: numb
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t tf = 0;
       
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tf++;
	}
	return (tf);
}
