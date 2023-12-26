#include "hash_tables.h"
/**
 * hash_table_get - get table
 * @ht: table
 * @key: key
 * Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *azw;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	azw = ht->array[index];

	while (azw != NULL)
	{
		if (strcmp(azw->key, key) == 0)
			return (azw->value);
		azw = azw->next;
	}

	return (NULL);
}
