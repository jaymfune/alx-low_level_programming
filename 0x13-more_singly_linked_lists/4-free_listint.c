#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	/* A temporary pointer to store the next node */
	listint_t *temp;

	/* Loop until the head pointer becomes NULL */
	while (head)
	{
		/* Store the next node's address in the temp pointer */
		temp = head->next;

		/* Free the memory occupied by the current node */
		free(head);

		/* Move the head pointer to the next node */
		head = temp;
	}
}
