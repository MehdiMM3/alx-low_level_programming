#include"main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value.
 * @n: Pointer.
 * @index: The index.
 * Return: 1 if it worked, or -1 if an error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
