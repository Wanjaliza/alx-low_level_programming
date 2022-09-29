#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *current;
	unsigned int num;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		current->prev = NULL;
		free(current);
		return (1);
	}
	while (num < index)
	{
		before = current;
		if (current->next == NULL)
			return (-1);
		current = current->next;
		num++;
	}
	before->next = current->next;

	if (current->next != NULL)
		current->next->prev = before;
	free(current);

	return (-1);
}
