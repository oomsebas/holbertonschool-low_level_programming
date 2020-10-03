#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 * Return None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
 	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
	}
	printf("}\n");
}
