#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
