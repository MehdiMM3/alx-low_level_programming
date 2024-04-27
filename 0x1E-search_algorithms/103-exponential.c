#include "search_algos.h"

/**
  * _binary_search - Searches for a value.
  * @array: A pointer.
  * @left: The starting index.
  * @right: The ending index.
  * @value: The value.
  *
  * Return: If NULL -1, if not the index.
  * Description: Prints the subarray being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value.
  * @array: A pointer.
  * @size: The number of elements.
  * @value: The value.
  *
  * Return: If NULL -1, the index.
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, x;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	x = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, x);
	return (_binary_search(array, i / 2, x, value));
}
