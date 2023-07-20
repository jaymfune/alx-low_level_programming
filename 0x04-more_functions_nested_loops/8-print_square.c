#include "main.h"
/**
 * print_square -  a function that prints a square
 * @size: input number of the width and length of
 *     square
 * Return: a square || new line
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
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

			putchar('\n');
		}
	}
}

