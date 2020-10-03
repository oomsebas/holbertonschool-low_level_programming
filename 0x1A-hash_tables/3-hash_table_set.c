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

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	key_num = key_index((unsigned char *)key, (unsigned long int)ht->size);
	tmp = ht->array[key_num];
	if (ht->array[key_num] != 0)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		else
		{
			new = malloc(sizeof(hash_node_t));
			if (new == NULL)
				return (0);
			new->key = strdup(key);
			new->value = strdup(value);
			new->next = ht->array[key_num];
			ht->array[key_num] = new;
		}

	}
	else
	{
		ht->array[key_num] = malloc(sizeof(hash_node_t));
		if (!(ht->array[key_num]))
			return (0);
		(ht->array[key_num])->key = strdup(key);
		(ht->array[key_num])->value = strdup(value);
		(ht->array[key_num])->next = NULL;

	}

	return(1);

}
