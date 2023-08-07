#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;

	/* Check if width or height is negative or 0 */
	if (height <= 0 || width <= 0)
		return (NULL);

	/* Allocate memory for an array of 'height' integer pointers */
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	/* Loop through each row and allocate memory for 'width' integers */
	for (int i = 0; i < height; i++)
	{
		/* Allocate memory for 'width' integers and initialize to 0 */
		arr[i] = (int *)calloc(width, sizeof(int));

		/* Check if memory allocation fails for this row */
		if (arr[i] == NULL)
		{
			/* Free memory for previously allocated rows */
			for (int j = 0; j < i; j++)
				free(arr[j]);

			/* Free memory for the array of integer pointers and return NULL */
			free(arr);
			return (NULL);
		}
	}

	/* Return the allocated 2D grid */
	return (arr);
}



