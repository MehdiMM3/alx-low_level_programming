#include "search_algos.h"

/**
  * jump_search - Searches for a value.
  * @array: A pointer.
  * @size: The number of elements.
  * @value: The value.
  *
  * Return: If NULL -1, if not the first index.
  * Description: Prints a value every time it is compared in the array.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, x, y;

	if (array == NULL || size == 0)
		return (-1);

	y = sqrt(size);
	for (i = x = 0; x < size && array[x] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		i = x;
		x += y;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, x);

	x = x < size - 1 ? x : size - 1;
	for (; i < x && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
