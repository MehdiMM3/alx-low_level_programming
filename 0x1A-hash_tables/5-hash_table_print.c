#include "hash_tables.h"

/**
 * hash_table_print - print
 * @ht: table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *azq;
	char hzw = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		azq = ht->array[i];
		while (azq != NULL)
		{
			if (hzw == 1)
				printf(", ");
			printf("'%s': '%s'", azq->key, azq->value);
			hzw = 1;
			azq = azq->next;
		}
	}
	printf("}\n");
}
