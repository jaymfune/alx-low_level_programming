#include"main.h"

/**
 * _islower - function to check if
 *           character is lowercase
 *
 * @number: checks input of function
 *
 * Return: returns 1 if "number" is lowercase
 *         otherwise always 0 (Success)
*/

int _islower(int number)
{
	if (number >= 97 && number <= 122)
	{
		return (1);
	}
	return (0);
}
