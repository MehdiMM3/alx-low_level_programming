#include "hash_tables.h"

/**
 * hash_djb2 - djb2
 * @str: string
 * Return: value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int erf;
	int x;

	erf = 5381;
	while ((x = *str++))
	{
		erf = ((erf << 5) + erf) + x;
	}
	return (erf);
}
