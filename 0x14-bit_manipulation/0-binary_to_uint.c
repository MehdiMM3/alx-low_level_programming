#include "main.h"

/**
 * binary_to_uint - conv the binary numb
 * @b: binary numb
 * Return: unsigned b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		d = d * 2 + (*b++ - '0');
	}
	return (d);
}
