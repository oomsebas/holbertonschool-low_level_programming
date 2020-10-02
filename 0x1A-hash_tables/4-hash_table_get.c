#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key
 * @ht: the hash table
 * @key: the key to search for
 * Return: the value associated with the element, or NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	key_idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[key_idx];
	for ( ; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
	}
	return (NULL);
}
