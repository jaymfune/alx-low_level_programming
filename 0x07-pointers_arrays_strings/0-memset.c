/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: The pointer to the area in memory.
 * @b: The constant byte.
 * @n: The size to be filled in bytes.
 *
 * Description: This function fills the first @n bytes of the memory area
 *		pointed to by @s with the constant byte @b.
 *
 * Return: A pointer to the arae in memory @s.
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
