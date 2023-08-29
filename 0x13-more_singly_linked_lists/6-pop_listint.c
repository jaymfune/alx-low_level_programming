#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp; /* Temporary pointer to a listint_t */
	int num;

	/* If 'head or *head' is NULL, return 0 indicating an empty list. */
	if (!head || !*head)
		return (0);

	/* Store the data of the first node (head node) in the 'num' variable. */
	num = (*head)->n;

	/* Store the next node after the head in the 'temp' pointer. */
	temp = (*head)->next;

	/* Free the memory occupied by the current head node. */
	free(*head);

	/* Update 'head' to point to the next node, effectively removing the old head. */
	*head = temp;

	return (num);
}
