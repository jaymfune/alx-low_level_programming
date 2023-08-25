#include "<stdlib.h>"
#include "<string.h>"
#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a linked list
  * @head: double pointer to the list_t list
  * @str: new string to add in the node
  * Return: the address of the new element, or NULL if it fails
  */

list_t *add_node(list_t **head, const char *str)
{
	/* pointer to a new list node */
	list_t *new;

	/* variable to store the length of the input string */
	unsigned int len = 0;

	/* Calculate the length of the input string by iterating through its characters */
	while (str[len])
		len++;

	/* Allocate memory for the new list node */
	new = malloc(sizeof(list_t));

	/* Check if memory allocation was successful */
	if (!new)
		return (NULL);

	/* Duplicate the input string and store it in the new node's 'str' field */
	new->str = strdup(str);

	/* Store the length of the input string in the new node's 'len' field */
	new->len = len;

	/* Make the new node point to the current head of the linked list */
	new->next = (*head);

	/* Update the head of the linked list to point to the new node */
	(*head) = new;

	/* Return the address of the new element (the new node) */
	return (*head);
}
