#include "hash_tables.h"

/**
 *key_index - Function that gives you the index of the key
 *@key: Key to get the index for
 *@size: size of the array
 *
 *Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
