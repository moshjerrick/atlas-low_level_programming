#include "hash_tables.h"
/**
 * key_index - computes index of given key in table
 * @key: key
 * @size: size of hash table
 * Return: index of key in a hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);

}