#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	/* Find the length of the string */
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	// Print the characters in reverse order
	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
