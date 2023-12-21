#include "hash_tables.h"

/**
 * hash_tables_create - creation
 * @size: array size
 * Return: pointer
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *edf;
	unsigned long int i;

	edf = malloc(sizeof(hash_table_t));
	if (edf == NULL)
		return (NULL);
	edf->size = size;
	edf->array = malloc(size * sizeof(hash_node_t *));
	if (edf->array == NULL)
	{
		free(edf);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		edf->array[i] = NULL;
	return (edf);
}
