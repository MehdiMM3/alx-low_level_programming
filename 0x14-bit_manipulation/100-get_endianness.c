#include "main.h"

/**
 * get_endianness - return.
 * Return: 0 if big, 1 if small.
*/
int get_endianness(void)
{
	unsigned long int p = 1;

	return (*(char *)&p);
}
