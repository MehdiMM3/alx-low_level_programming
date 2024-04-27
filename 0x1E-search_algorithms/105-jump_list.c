#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm.
 * @list: A pointer.
 * @size: The number of nodes.
 * @value: The value.
 *
 * Return: If NULL, NULL, if not ptr to the first node.
 * Description: Prints a value every time it is compared in the list.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t x, y;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	x = 0;
	y = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (x += y; jump->index < x; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
