#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * multiples of 3 print Fizz instead of the number
 * multiples of 5 print Buzz instead of the number
 * multiples 3 & 5 print FizzBuzz instead of the number
 * Return: Always 0 (Success)
*/

void fizz_buzz(void);

int main(void)
{
	fizz_buzz();

	return (0);
}

void fizz_buzz(void)
{
	int i;
	int end = 100;

	for (i = 1; i <= end; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d\n ", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
}
