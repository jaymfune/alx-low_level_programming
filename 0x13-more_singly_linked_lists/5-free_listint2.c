#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	/* A temporary pointer to hold the next node */
	listint_t *temp;

	/* Check if the pointer to the head is NULL */
	if (head == NULL)
		return;

	/* Iterate through the linked list until the head pointer becomes NULL */
	while (*head)
	{
		/* Store the next node's address in the temporary pointer */
		temp = (*head)->next;

		/* Free the current node */
		free(*head);

		/* Move the head pointer to the next node */
		*head = temp;
	}

	*head = NULL;
}
