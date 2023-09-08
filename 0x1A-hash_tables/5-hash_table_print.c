#include "hash_tables.h"

/**
 *hash_table_print - function that prints a table
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
