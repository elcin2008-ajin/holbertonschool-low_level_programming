#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be empty)
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* Check if key already exists */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);

			free(node->value);
			node->value = value_copy;
			return (1);
		}
		node = node->next;
	}

	/* Create new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}

	/* Insert at the beginning (collision handling) */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
