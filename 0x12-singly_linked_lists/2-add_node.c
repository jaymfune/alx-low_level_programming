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
	/* Allocate memory for the new node */
	list_t *new_node;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL); /* Memory allocation failed */

	/* Duplicate the input string and store it in the new node's 'str' field */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* Clean up memory allocated for the new node */
		return (NULL); /* Memory allocation for string duplication failed */
	}

	/* Calculate the length of the duplicated string */
	new_node->len = strlen(str);

	/* Make the new node point to the current head of the list */
	new_node->next = *head;

	/* Update the head of the list to point to the new node */
	*head = new_node;

	return (new_node);
}

