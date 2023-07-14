#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print 0, 1, - 9
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		/**
		  * convert each number to its corresponding
		  * character by adding the ASCII value of '0'.
		 */

		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
