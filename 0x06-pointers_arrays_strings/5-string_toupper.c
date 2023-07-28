#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 *
 * @string: The string.
 *
 * Return: A pointer to the string.
 */

char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if ((string[i] >= 97) && (string[i] <= 122))
		{
			string[i] = string[i] - 32;
		}

		i++;
	}

	return (string);
}
