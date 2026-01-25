#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - Hash node
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: Pointer to the next node (collision)
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table
 *
 * @size: The size of the array
 * @array: Array of pointers to hash nodes
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
