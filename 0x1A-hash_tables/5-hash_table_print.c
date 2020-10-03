#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 * Return None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int len;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			len = i;
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL && i != len)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
		}
		
	}
	if (len != 0)
	{
		printf("'%s': '%s'", ht->array[len]->key, ht->array[len]->value);
	}
	printf("}\n");
}
