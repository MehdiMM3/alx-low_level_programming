#include "main.h"

/**
 * binary_to_uint - conv the binary numb
 * @rc: binary numb
 * Return: unsigned rc
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;

	if (!rc)
		return (0);
	while (*rc)
	{
		if (*rc != '0' && *rc != '1')
			return (0);
		d = d * 2 + (*b++ - '0');
	}
	return (d);
}
