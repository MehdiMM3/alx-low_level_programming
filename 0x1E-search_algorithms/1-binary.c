#include "search_algos.h"

/**
  * binary_search - Searches for a value.
  * @array: A pointer.
  * @size: The number of elements.
  * @value: The value.
  *
  * Return: If NULL -1, if not the index.
  * Description: Prints the subarray after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, x, y;

	if (array == NULL)
		return (-1);

	for (x = 0, y = size - 1; y >= x;)
	{
		printf("Searching in array: ");
		for (i = x; i < y; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = x + (y - x) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			y = i - 1;
		else
			x = i + 1;
	}

	return (-1);
}
