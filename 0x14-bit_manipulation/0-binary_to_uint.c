#include"main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number.
 * @b: The binary string.
 * Return: The conv number, or 0 if there are invalid chars or NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = (x << 1) | (*b - '0');
		b++;
	}
	return (x);
}
