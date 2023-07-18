#include"main.h"

/**
 * print_alphabet - print alphabet
*/

void print_alphabet(void)
{
	int lines = 10;
	int i;
	char letter;

	for (i = 0; i < lines; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}

	_putchar('\n');
}
