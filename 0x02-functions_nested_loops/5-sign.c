#include"main.h"

/**
 * print_sign - function to check if
 *           'n' > 0, 'n' < 0 or 'n' = 0
 *
 * @n: checks input of function
 *
 * Return: return 1 if 'n' > 0
 *         return 0 if 'n' = 0
 *         return -1 if 'n' < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
