#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	/* variable to keep track of the number of nodes */
	size_t num = 0;

	/* Iterate through the linked list until the current node is not NULL */
	while (h)
	{
		num++;

		/* Move to the next node in the linked list */
		h = h->next;
	}

	return (num);
}
