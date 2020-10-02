#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash_num;

	hash_num = hash_djb2(key);
	return (hash_num % size);

}
