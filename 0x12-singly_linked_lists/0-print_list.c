#include "lists.h"

/**
  * print_list - print elements in a linked list
  * @h: pointer to head the first node
  * Return: Number of nodes
  */

size_t print_list(const list_t *h)
{
	/* counter for number of nodes */
	size_t node_count = 1;

	while (h)
	{
		/* If the string in the current node is NULL, print [0] (nil). */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/* Print the length and content of the string in the current node. */
			printf("[%u] %s\n", h->len, h->str);

		/* Move to the next node in the list. */
		h = h->next;

		node_count += 1;
	}

	return (node_count);
}
