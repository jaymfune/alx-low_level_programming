#include"main.h"

/**
 * print_alphabet - print alphabet
*/

void print_alphabet()
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');

	return (0);
}
