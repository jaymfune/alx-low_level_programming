#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers within a specified range
 * @min: minimum value of the range
 * @max: maximum value of the range (inclusive)
 *
 * Return: pointer to the new array, NULL if allocation fails or min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	/* Check if the minimum value is greater than the maximum value */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	ptr = malloc(sizeof(int) * size);


	/* Check if memory allocation was successful */
	if (ptr == NULL)
		return (NULL);

	/* Loop to fill the array with values in the specified range */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

