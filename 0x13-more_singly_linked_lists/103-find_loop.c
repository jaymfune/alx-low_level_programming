#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	/* Check if the head of the linked list is NULL. */
	if (!head)
		return (NULL);

	/* Traverse the linked list using the slow and fast pointers. */
	while (slow && fast && fast->next)
	{
		/* Move the '*fast' two steps ahead and the '*slow' one step ahead. */
		fast = fast->next->next;
		slow = slow->next;

		/* Check if the fast pointer has caught up with the slow pointer. */
		if (fast == slow)
		{
			/* If a loop is detected, reset the slow pointer to the head of the list. */
			slow = head;

			/* Move both slow and fast pointers one step at a time until they meet. */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			/* Return the address of the node where the loop starts. */
			return (fast);
		}
	}

	/* If no loop is found, return NULL. */
	return (NULL);
}
