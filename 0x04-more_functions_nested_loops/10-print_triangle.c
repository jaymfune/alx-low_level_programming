#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
*/

void print_triangle(int size)
{
	int i, j, k;

	/* Size to determines loop count */
	for (i = 0; i <= size; i++)
	{
		/* Print space if the i if greater than 0 */
		if (i > 0)
		{
			for (k = 0; k < size - i; k++)
			{
				putchar(' ');
			}
		}

		/* Print # */
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}

		/* Start new line if i if greater than 0 */
		if (i > 0)
		{
			putchar('\n');
		}
	}
}
