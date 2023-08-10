#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/* Calculate the lengths of the input strings */
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation was successful */
	if (!s)
		return (NULL);

	/* Copy characters from s1 to the concatenated string */
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	/* Copy n bytes from s2 to the string if n is smaller than len2 */
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	/* Copy remaining characters from s2 to the string if n > || = to len2 */
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	/* Add null terminator to the concatenated string */
	s[i] = '\0';
	return (s);
}
