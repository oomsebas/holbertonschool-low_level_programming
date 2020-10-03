#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 * Return None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int len = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for ( ; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			len = i;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL && i != len)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s', ", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
	if (len)
	{
		tmp = ht->array[len];
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
