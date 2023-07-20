#include "main.h"

/**
 * print_square -  a function that prints a square
 * @n: input number of the width and length of
 *     square
 * Return: a square || new line
*/

void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar('#');
			}
		}
	}
}

