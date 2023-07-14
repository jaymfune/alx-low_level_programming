#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letters in alphabet
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char letter = "a";

	while (letter <= "z")
	{
		putchar(letter);
		letter++;
	}

	putchar("\n");

	return (0);
}
