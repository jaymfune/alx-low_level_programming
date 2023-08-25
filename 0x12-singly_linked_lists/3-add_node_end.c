#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a linked list
  * @head: double pointer to the list_t list
  * @str: string to put in the new node
  * Return: address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Define a new list_t node and a temporary pointer to the head of the list */
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplicate the input string and store its length in the new node */
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* If the list is empty, make the new node the new head of the list */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* Append the new node at the end of the list */
	temp->next = new;

	return (new);
}
