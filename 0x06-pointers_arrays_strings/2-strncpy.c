#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to copy from @src string.
 *
 * Description: This function copies the @src string to the @dest string,
 *		Using at most n bytes from @src; and @src is not
 *		null-terminated if it contains n or more bytes.
 *
 * Return: A pointer to @dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
