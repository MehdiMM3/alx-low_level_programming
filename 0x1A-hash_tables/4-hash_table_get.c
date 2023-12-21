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
	hash_node_t *azq;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	azq = ht->array[index];
	while (azq != NULL)
	{
		if (strcmp(azq->key, key) == 0)
			return (azq->value);
		azq = azq->next;
	}
	return (NULL);
}
