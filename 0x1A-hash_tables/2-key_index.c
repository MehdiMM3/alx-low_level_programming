#include "hash_tables.h"

/**
 * key_index - index of key
 * @key: key
 * @size: size
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
