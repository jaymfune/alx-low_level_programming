#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Print alphabet in lower and upper case
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		purchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
