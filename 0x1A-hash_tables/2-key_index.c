#include "hash_tables.h"

/**
 * key_index - function that returns the index in the hash table
 * @key: the string to be parsed to the hash function
 * @size: size of the array of the hash table
 * Return: the index on the array to store the key and value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_num;

	hash_num = hash_djb2(key);
	return (hash_num % size);

}
