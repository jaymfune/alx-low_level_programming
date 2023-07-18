#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: last Digit
*/

int print_last_digit(int n)
{
	last_digit = n % 10; /* Get last digit from n */

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
	}
	else
	{
		last_digit = n % 10;
	}

	return last_digit;
}
