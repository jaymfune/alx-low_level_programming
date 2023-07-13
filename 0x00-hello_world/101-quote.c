#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print an error message
 *
 * Return: Return 1 to symbolise an error.
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", msg);
	return (1);
}
