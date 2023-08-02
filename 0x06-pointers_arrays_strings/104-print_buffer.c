#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 *
 * @b: A pointer to the buffer.
 * @size: The size of the buffer.
 *
 * Description: This function prints the content of @size bytes of the buffer
 *		pointed to by @b.
 *		> The output is 10 bytes per line, with each line starting with
 *		the position of the first byte of the line in hexadecimal.
 *		> Each line shows the hex content of the buffer, 2 bytes at a
 *		time, separated by a space.
 *		> The letter is printed if it is a printeable character, if not
 *		'.' is printed.
 *		> If the size is 0 or less, the output is only a new line.
 *
 * Return: Void.
 */

void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
