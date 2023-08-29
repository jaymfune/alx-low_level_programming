#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head; /* A temporary point 'temp' pointing to the node */

	/* While 'temp' is not NULL and the current index is less than the desired index */
	while (temp && i < index)
	{
		temp = temp->next; /* Move 'temp' to the next node in the list */
		i++;
	}

	/* Return 'temp' if it points to a valid node, otherwise return NULL */
	return (temp ? temp : NULL);
}
