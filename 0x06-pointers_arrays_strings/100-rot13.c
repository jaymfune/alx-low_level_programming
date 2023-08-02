#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @string: The string.
 *
 * Return: The pointer to the string.
 */

char *rot13(char *string)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (string[i] != '\0')
	{
		for (j = 0 ; j < 52; j++)
		{
			if (string[i] == alphabet[j])
			{
				string[i] = rot13[j];
				break;
			}
		}

		i++;
	}

	return (string);
}
