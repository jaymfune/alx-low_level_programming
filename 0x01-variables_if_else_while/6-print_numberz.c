#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: prints all single digit numbers of base 10 starting from 0
  *
  * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar(num + '0'); /* convert num to ASCII representation */
	}

	putchar('\n');

	return (0);
}
