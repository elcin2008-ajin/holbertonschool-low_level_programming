#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Task 0: Print all elements of a doubly linked list */
size_t print_dlistint(const dlistint_t *h);

/* Task 1: Return the number of elements in a doubly linked list */
size_t dlistint_len(const dlistint_t *h);

/* Task 2: Add a new node at the beginning of a doubly linked list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Task 3: Add a new node at the end of a doubly linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Task 4: Free a doubly linked list */
void free_dlistint(dlistint_t *head);


/* Task 5: Get node at index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif /* LISTS_H */
