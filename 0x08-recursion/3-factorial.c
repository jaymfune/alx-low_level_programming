#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 1) /* Base case : factorial of 1 */
		return (1);
	if (n < 0) /* Base case : factorial of a negative value */
		return (-1);

	return (number * factorial(number - 1));
}
