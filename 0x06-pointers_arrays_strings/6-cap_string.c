#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @string: The string.
 *
 * Return: A pointer to the string.
 */

char *cap_string(char *string)
{
	int word_sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j;
	int i = 0;

	if ((string[i] >= 97) && (string[i] <= 122))
	{
		string[i] = string[i] - 32;
	}
	i++;
	while (string[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (string[i] == word_sep[j])
			{
				if ((string[i + 1] >= 97) && (string[i + 1] <= 122))
				{
					string[i + 1] = string[i + 1] - 32;
				}

				break;
			}
		}

		i++;
	}

	return (string);
}
