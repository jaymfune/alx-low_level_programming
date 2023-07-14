#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Print numbers under base 16
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	int digit;

	/* Print all numbers under the base 16 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	/* Print all chars under the base 16 */
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
