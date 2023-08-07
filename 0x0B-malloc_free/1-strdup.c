#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;

	/* Check if the input string is NULL. */
	if (str == NULL)
		return (NULL);

	/* Allocate memory for the duplicate string, including space for the null terminator. */
	dup = (char *)malloc(strlen(str) + 1);

	/* Check if memory allocation was successful. */
	if (dup == NULL)
		return (NULL);

	/* Copy the content of the input string 'str' into the allocated memory 'dup'. */
	strcpy(dup, str);

	/* Return the pointer to the newly created duplicate string. */
	return (dup);
}


