#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* variable 'num_of_nodes' to count the number of nodes */
	size_t num_of_nodes = 0;

	/* Iterate through the linked list until 'h' becomes NULL (end of list) */
	while (h)
	{
		/* Print the value of the current node's 'n' member */
		printf("%d\n", h->n);
		num_of_nodes++;

		/* Move to the next node by updating 'h' to point to the next node */
		h = h->next;
	}

	return (num_of_nodes);
}


