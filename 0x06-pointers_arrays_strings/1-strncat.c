#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src, int n)
{
	/* Find the end of the dest string */
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/* Concat the src string to the dest string, up to n characters */
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		i++;
	}


	return (dest);
}
