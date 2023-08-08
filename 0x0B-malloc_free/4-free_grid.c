#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid pointer is NULL, which means there's nothing to free. */
	if (grid == NULL)
		free(grid);

	/* Loop through each row (height) of the grid and free the memory allocated for each row. */
	for (i = 0; i < height; i++)
		free(grid[i]);


	/* free the memory allocated for the entire grid itself. */
	free(grid);
}
