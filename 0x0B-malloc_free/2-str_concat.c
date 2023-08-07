#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *s3;


	/* Handle cases where both input strings are empty. */
	if (s1 == NULL && s2 == NULL)
		return (NULL);


	/* Calculate lengths of input strings. */
	len1 = (s1 ? strlen(s1) : 0);
	len2 = (s2 ? strlen(s2) : 0);

	/* Allocate memory for concatenated string. */
	s3 = (char *)malloc(len1 + len2 + 1);
	if (s3 == NULL)
		return (NULL);

	/* Copy characters from s1 to s3. */
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	/* Copy characters from s2 to s3. */
	for (i = 0; i < len2; i++)
	{
		s3[len1 + i] = s2[i];
	}

	/* Null-terminate the concatenated string. */
	s3[len1 + len2] = '\0';

	return (s3);
}

