#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 *
 * @width: width of the 2-dimensional array
 * @height: height of the 2-dimensional array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		grid[hgt] = malloc(sizeof(int) * width);

		if (grid[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(grid[hgt]);

			free(grid);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			grid[hgt][wid] = 0;
	}

	return (grid);
}
