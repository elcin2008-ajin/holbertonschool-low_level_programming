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

/* Task 0: print_dlistint */
size_t print_dlistint(const dlistint_t *h);

/* Task 1: dlistint_len */
size_t dlistint_len(const dlistint_t *h);

/* Task 2: add_dnodeint */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Task 3: add_dnodeint_end */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Task 4: free_dlistint */
void free_dlistint(dlistint_t *head);

#endif /* LISTS_H */
