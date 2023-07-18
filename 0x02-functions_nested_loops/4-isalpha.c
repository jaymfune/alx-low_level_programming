#include"main.h"

/**
 * _isalpha - function to check if
 *           character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if "c" is alphabet
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
