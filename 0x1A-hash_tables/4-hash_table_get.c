#include "hash_tables.h"

/**
 *hash_table_get - retrieves value associated with the key
 *@ht: hash table to look
 *@key: key that is being looked for
 *Return: value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	return (current->value);
}
