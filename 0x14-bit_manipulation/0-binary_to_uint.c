#include"main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The converted number, or 0 if there are invalid characters or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int z = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		z = (z << 1) | (*b - '0');
		b++;
	}

	return (z);
}
