#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate array of pointers */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* allocate each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* free already allocated rows */
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}

		/* initialize elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
