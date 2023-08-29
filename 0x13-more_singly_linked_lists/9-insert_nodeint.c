#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new; /* A pointer to a new node */
	listint_t *temp = *head; /* A temporary pointer to traverse the list */

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));

	/* Check if memory alloaction failed or head pointer is NULL */
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* if index is 0, insert at the beginning */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Traverse the list to the node before the desired index */
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
