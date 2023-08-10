#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area to be filled.
 * @b: Char to copy.
 * @n: Number of times to copy b.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/* Fill memory area s with char b, n times */
		s[i] = b;
	}

	/* Return the modified memory area s. */
	return (s);
}

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	/* If either nmemb or size is zero, return NULL. */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for an array of size nmemb * size. */
	ptr = malloc(size * nmemb);

	/* If malloc fails, return NULL. */
	if (ptr == NULL)
		return (NULL);

	/* Fill the allocated memory with zeros. */
	_memset(ptr, 0, nmemb * size);

	/* Return the pointer to the allocated and initialized memory. */
	return (ptr);
}

