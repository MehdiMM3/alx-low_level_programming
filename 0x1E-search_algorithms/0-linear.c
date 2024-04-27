#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array.
  * @array: pointer.
  * @size: number of elements.
  * @value: value.
  *
  * Return: If NULL -1, if not first index.
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
