#include"main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{ 
		putchar(i + 48);
	}

	putchar('\n');
}
