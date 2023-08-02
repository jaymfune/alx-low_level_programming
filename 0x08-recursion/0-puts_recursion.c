#include "main.h"
/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar('\n'); /* Print a new line */
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with the next character */
}
