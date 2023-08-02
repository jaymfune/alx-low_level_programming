#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number.
 * @n2: The second number.
 * @r:	The Buffer that stores the result.
 * @size_r: The Buffer size.
 *
 * Return: 0 if the Buffer can't contain the result. A pointer to the
 *	   result, otherwise.
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, sum, big, digit1, digit2, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= j)
		big = i;
	else
		big = j;
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0';
	i--, j--, size_r--;
	digit1 = n1[i] - 48, digit2 = n2[j] - 48;
	while (big >= 0)
	{
		sum = digit1 + digit2 + carry;
		if (sum >= 10)
			carry = sum / 10;
		else
			carry = 0;
		if (sum > 0)
			r[big] = (sum % 10) + 48;
		else
			r[big] = '0';
		if (i > 0)
			i--, digit1 = n1[i] - 48;
		else
			digit1 = 0;
		if (j > 0)
			j--, digit2 = n2[j] - 48;
		else
			digit2 = 0;
		big--, size_r--;
	}
	if ((*r) == '0')
		return (r + 1);
	else
		return (r);
}
