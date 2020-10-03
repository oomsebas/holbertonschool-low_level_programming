#include "hash_tables.h"

/**
 * hash_table_set - sets the values and key of a list
 * @ht: pointer to the hash table
 * @key: the key to calculate the index and to store
 * @value: the value to store
 * Return: 1 to sucess, 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_num;
	hash_node_t  *new, *tmp;
	char *tmp1 = NULL;

	if ((key == NULL) | (*key == '\0') | (ht == NULL) | (value == NULL))
		return (0);
	if ((ht->size == 0) | !(ht->array))
		return (0);
	key_num = key_index((unsigned char *)key, (unsigned long int)ht->size);
	tmp = ht->array[key_num];
	if (tmp == NULL)
	{
		ht->array[key_num] = malloc(sizeof(hash_node_t));
		ht->array[key_num]->key = strdup(key);
		ht->array[key_num]->value = strdup(value);
		ht->array[key_num]->next = NULL;
		return (1);
	}
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp1 = tmp->value;
				tmp->value = strdup(value);
				if (tmp->value == NULL)
					return (0);
				free(tmp1);
				return (1);
			}
			tmp = tmp->next;
		}
		new = malloc(sizeof(hash_node_t));
		new->key = strdup(key);
		if (new->key == NULL)
			return (0);
		new->value = strdup(value);
		if (new->value == NULL)
			return (0);
		new->next = ht->array[key_num];
		ht->array[key_num] = new;
		return (1);
	}
	return (0);

}
