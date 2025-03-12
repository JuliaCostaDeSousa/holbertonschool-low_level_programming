#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: 2d grid to set free
 * @height: hauteur, nb de ligne
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL)
	return;
	for (; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
