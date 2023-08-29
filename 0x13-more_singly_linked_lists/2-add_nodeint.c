#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Allocate memory for a new node structure using the size of listint_t. */
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL); /* If malloc fails to allocate memory, return NULL indicating failure. */

	/* Set the 'n' field of the new node to the value provided as 'n'. */
	new->n = n;

	/* Set the 'next' field of the new node to point to the current first node (the original head). */
	new->next = *head;

	/* Update the head pointer to point to the new node, making it the new first node in the list. */
	*head = new;

	/* Return a pointer to the new node. */
	return (new);
}
