#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	/* Find the end of the dest string */
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/* Concat the src string to the dest string */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add a terminating null byte to the end of the concatenated string */
	*dest_end = '\0';

	return (dest);
}
