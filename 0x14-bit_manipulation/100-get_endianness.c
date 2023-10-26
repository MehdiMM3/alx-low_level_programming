#include "main.h"

/**
 * get_endianness - return it to the system
 * Return: 0 if big, 1 if not
*/
int get_endianness(void)
{
	unsigned long int ez = 1;

	return (*(char *)&ez);
}
