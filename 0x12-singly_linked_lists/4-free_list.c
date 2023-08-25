#include "lists.h"

/**
  * free_list - free single linked list
  * @head: pointer to the first node of the list
  * Return: nothing
  */

void free_list(list_t *head)
{
	list_t *current;

	/* Iterate through the linked list */
	while ((current = head) != NULL)
	{
		/* Move 'head' to the next node */
		head = head->next;

		/* Free the string stored in the current node */
		free(current->str);

		/* Free the memory allocated for the current node */
		free(current);
	}
}
