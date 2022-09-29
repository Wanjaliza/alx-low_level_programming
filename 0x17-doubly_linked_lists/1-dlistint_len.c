#include "lists.h"
/**
 * dlistint_len - returns number of elements
 * @h: pointer to head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	else
		return (dlistint_len(h->next) + 1);
}
