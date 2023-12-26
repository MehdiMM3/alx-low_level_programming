#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Delete
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *azw, *erf;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		azw = ht->array[i];
		while (azw != NULL)
		{
			erf = azw->next;
			free(azw->key);
			free(azw->value);
			free(azw);
			azw = erf;
		}
	}
	free(ht->array);
	free(ht);
}
