#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	/* If the list is empty, Return -1 to indicate failure */
	if (*head == NULL)
		return (-1);

	/* If the index is 0, meaning the first node needs to be deleted */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	/* Traverse the list to find the node before the one to be deleted */
	while (i < index - 1)
	{
		/* If temp is NULL or the next node is NULL */
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
