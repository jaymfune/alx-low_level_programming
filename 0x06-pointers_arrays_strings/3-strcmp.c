#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return:	0 if both strings are equal, a negeative value if the first
 *		string is less than the second, and a positive value if the
 *		first string is breater than the second.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
	{
		i = *s1 - *s2;
	}

	return (i);
}
