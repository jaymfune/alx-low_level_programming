#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		/* Base case: y is negative, return -1 */
		return (-1);
	if (y == 0)
		/* Base case: anything raised to the power of 0 is 1 */
		return (1);

	/* Recursive call to calculate power */
	return (x * _pow_recursion(x, y - 1));
}
