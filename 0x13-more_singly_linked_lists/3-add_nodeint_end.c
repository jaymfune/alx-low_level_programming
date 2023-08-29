#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* A pointer for the new node & a temporary pointer to traverse the list */
	listint_t *new;
	listint_t *temp = *head;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* If the list is empty, make the new node the first element and return */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
