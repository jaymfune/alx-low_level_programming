#include "main.h"

/**
  * swap_int - swap the value of pointer a with b
  *
  * @a: pointer a
  * @b: pointer b
  *
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
