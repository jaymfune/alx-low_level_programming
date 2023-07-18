#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int num, multi, product;
	int times = 9;

	/* Create lines of times tables */
	for (num = 0; num <= times; num++)
	{
		for (multi = 0; multi <= times; multi++)
		{
			/* Find multiplication product */
			product = multi * num;

			/* Print first product with any special characters */
			if (product == 0 && multi < 1)
			{
				_putchar('0');
			}
			/* Convert product to ASCII characters */
			else if (product >= 0 && product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			/* Check to print comma or not */
			if (multi < times)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
