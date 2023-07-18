#include"main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, 
 *             followed by a new line
 *
 * @n: Starting number
*/

void print_to_98(int n);
/**
 * print_number - Prints a given number using putchar
 *
 * @number: The number to be printed
*/

void print_number(int number);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	print_to_98(-81);
	return (0);
}

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		/* Print numbers in descending order from n to 99 */
		for (count = n; count > 98; --count)
		{
			print_number(count);
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		/* Print numbers in ascending order from n to 97 */
		for (count = n; count < 98; ++count)
		{
			print_number(count);
			putchar(',');
			putchar(' ');
		}
	}

	/* Print the number 98 */
	print_number(98);
	putchar('\n');
}

/**
 * Function to format numbers
 * ASCII Conversion
 * Check negative to positive numbers
 * Reverse the order of numbers if required
*/
void print_number(int number)
{
	if (number == 0)
	{
		putchar('0');

		return;
	}

	/* Check if number is negative */
	int is_negative = 0;

	if (number < 0)
	{
		is_negative = 1;
		number = -number;
	}

	char digits[10]; /* store the individual digits of a number temporarily */
	int index = 0;

	/* Extract the digits of the number and store them in an array */
	while (number > 0)
	{
		digits[index++] = (number % 10) + '0';
		number /= 10;
	}

	/* Print the negative sign if the number is negative */
	if (is_negative)
		putchar('-');

	/* Print the digits in reverse order to reconstruct the number */
	while (index > 0)
	{
		putchar(digits[--index]);
	}
}
