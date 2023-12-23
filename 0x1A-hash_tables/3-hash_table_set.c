#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key to add
 * @value: The value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	/* Check for NULL pointers and empty key */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check for collision */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* If key already exists, update the value and return success */
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value); /* Free the old value */
			temp->value = strdup(value); /* Duplicate and set the new value */
			if (temp->value == NULL)
				return (0); /* strdup failed */
			return (1); /* Success */
		}
		temp = temp->next;
	}

	/**
	 * If no collision, create a new node and
	 * add it to the beginning of the list
	 */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* malloc failed */

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0); /* strdup failed */
	}

	/* Insert the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Success */
}
