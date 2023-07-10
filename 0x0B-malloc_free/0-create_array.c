#include "main.h"

/**
 * *create_array - creates an array
 * @size: size
 * @c: char
 * Return: pointerto the array initialized or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
