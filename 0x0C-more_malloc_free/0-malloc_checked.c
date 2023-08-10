#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory using malloc and assign the pointer to 'ptr' */
	ptr = malloc(b);

	/* Check if memory allocation was successful (ptr is not NULL) */
	if (ptr == NULL)
	{
		/* If allocation failed, exit the program with error code 98 */
		exit(98);
	}

	/* Return the allocated memory pointer */
	return (ptr);
}

