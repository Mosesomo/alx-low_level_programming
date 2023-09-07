#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table to add an element
 *@key: key of an element
 *@value: value associated with the key
 *
 *Return: 1 upon success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *curr = NULL;
	char *dup_value;
	unsigned long index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = dup_value;
			return (1);
		}
		curr = curr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = dup_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

