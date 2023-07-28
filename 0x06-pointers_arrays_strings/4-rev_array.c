#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: The array of integers.
 * @n: The size of the array.
 *
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		n--;

		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
	}
}
