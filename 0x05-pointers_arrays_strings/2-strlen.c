#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int counter = 0;

	/**
	  * Loop through the characters in the string
	  * until the null terminator is reached
	 */
	while (*s != '\0')
	{
		counter++; /* Increase string character count */
		s++; /* Move the pointer to the next character */
	}

	return (counter);
}
