#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints if a number is positive or negative
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", n);
	}
	else
	{
		printf("%i is zero", n);
	}

	return (0);
}
