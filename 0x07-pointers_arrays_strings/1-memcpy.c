/**
 * _memcpy - Copies an area in memory.
 *
 * @src: The area in memory to copy from i.e The Source.
 * @n: The number of bytes to copy.
 * @dest: The area in memory to copy it to i.e The Destination.
 *
 * Description: This function copies @n bytes from memory area @src to memory
 *		area @dest.
 *
 * Return: A pointer to @dest.
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
