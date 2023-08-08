#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: argument counter
 * @av: argument holder (array of char)
 * Return: a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	/* Check for invalid inputs: no arguments or NULL argument vector */
	if (ac == 0 || av == NULL)
		return (NULL); /* No args to concatenate */

	/* Calculate the total length required for the concatenated string */
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	/* Allocate memory to hold the concatenated string */
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;

	/* Iterate over each argument and concatenate them into the 'str' */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
