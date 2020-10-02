#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 * Return None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array[i] != NULL) & (ht->array[i]  != NULL))
			printf("{ %s : %s }", ht->array[i]->key, ht->array[i]->value);
	}
}
