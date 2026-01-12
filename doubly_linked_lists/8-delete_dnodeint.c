#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;

	/* Delete the first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node at index */
	for (i = 0; current && i < index; i++)
		current = current->next;

	if (!current)
		return (-1);

	/* Re-link the previous node */
	if (current->prev)
		current->prev->next = current->next;

	/* Re-link the next node */
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
