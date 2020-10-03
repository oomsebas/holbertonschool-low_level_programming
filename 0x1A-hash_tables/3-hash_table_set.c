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
	hash_node_t *tmp;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	key_num = key_index((const unsigned char *)key, (unsigned long int)ht->size);
	tmp = ht->array[key_num];
	if (ht->array[key_num] != 0)
	{
		if (strcmp(ht->array[key_num]->key, key) == 0)
		{
			free(ht->array[key_num]->value);
			ht->array[key_num]->value = strdup(value);
			return (1);
		}
		else
		{
			add_node(&(ht->array[key_num]), key, value);
		}

	}
	else
	{
		add_node(&(ht->array[key_num]), key, value);
	}
	return (1);

}

/**
 * add_node- adds a new node at the beginning of a list_t list
 * @head: The head of the node
 * @key: key
 * @value: value
 * Return: head of a node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		free(new_node->key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		free(new_node->value);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
