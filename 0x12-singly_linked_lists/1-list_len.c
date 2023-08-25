#include "lists.h"

/**
  * list_len - gets the number of nodes
  * @h: pointer to the head the first node
  * Return: number of nodes
  */

size_t list_len(const list_t *h)
{
	/* variable to count nodes and set it to 1 (for the head node) */
	size_t node_count = 1;

	/* If the head is NULL, the list is empty, so return 0 nodes */
	if (h == NULL)
		return (0);

	/* Iterate through the linked list nodes */
	while (h->next != NULL)
	{
		/* Move to the next node in the list */
		h = h->next;

		/* Increment the node count */
		node_count++;
	}

	return (node_count);
}
