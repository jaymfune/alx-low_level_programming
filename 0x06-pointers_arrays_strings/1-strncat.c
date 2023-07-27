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
	int i = 0; 
	int j = 0;

	/* Find the end of the dest string */
	while (*dest[i] != '\0')
	{
		i++;
	}

	/* Concat the src string to the dest string, up to n characters */
	while (*src[j] != '\0' && j < n)
	{
		dest[i] = *src[j];
		i++;
		j++;
	}


	return (dest);
}
