#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: A pointer to the source address.
 * @to: A pointer to the target address.
 *
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
