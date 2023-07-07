#include "main.h"

/**
 * _islower - lowcase checker
 *
 * @c: check inputs
 *
 * Return: returns 1 if lowercase else Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
