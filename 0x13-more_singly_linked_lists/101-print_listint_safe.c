#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocate
 * @list: list
 * @size: size
 * @new: node
 * Return: pointer
*/
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **n;
	size_t i;

	n = malloc(size * sizeof(listint_t *));
	if (n == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		n[i] = list[i];
	n[i] = new;
	free(list);
	return (n);
}

/**
 * print_listint_safe - print
 * @head: pointer
 * Return: nmbr
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **x = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == x[i])
			{
				printf("->  [%p] %d\n", (void *)head, head->n);
				free(x);
				return (n);
			}
		}
		n++;
		x = _r(x, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(x);
	return (n);
}
