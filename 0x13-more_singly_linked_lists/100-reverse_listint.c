#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* A pointer to the previous node, initialize it to NULL. */
	listint_t *prev = NULL;

	/* A pointer to the next node, initialize it to NULL. */
	listint_t *next = NULL;

	/* Loop until the current node pointer is not NULL. */
	while (*head)
	{
		next = (*head)->next; /* Store the next node's address in 'next'. */
		(*head)->next = prev; /**
				       * Make the current node's
				       * 'next' point to the previous node.
				       */
		prev = *head; /* Move the 'prev' pointer to the current node. */
		*head = next; /* Move the 'head' pointer to the next node. */
	}

	/**
	 * set the 'head' pointer to the last
	 * node (which was the first node in the original list).
	 */
	*head = prev;

	/**
	 * Return the pointer to the new first node
	 * (which was the last node in the original list).
	 */
	return (*head);
}
