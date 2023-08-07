#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p; /* Declare a pointer to char */
	unsigned int i = 0; /* Initialize a counter variable */

	/* If size is 0, return NULL pointer */
	if (size == 0)
		return (NULL);

	/* Allocate memory for an array of chars */
	p = (char *) malloc(sizeof(char) * size);

	/* If memory allocation fails, return 0 */
	if (p == NULL)
		return (0);

	while (i < size)
	{
		/* Fill the allocated memory with the character 'c' */
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0'; /* Add a null-terminator to mark the end of the char array */

	/* Return the pointer to the allocated memory */
	return (p);
}

