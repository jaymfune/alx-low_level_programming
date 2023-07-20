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
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
