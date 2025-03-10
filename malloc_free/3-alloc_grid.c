#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: largeur, nb de colonne
 * @height: hauteur, nb de ligne
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int column = 0;
	int row = 0;

	if (width <= 0 || height <= 0)
	return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (row = 0; row < height ; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
			if (grid[row] == NULL)
			{
			return (NULL);
			}
			for (column = 0; column < width; column++)
			{
				grid[row][column] = 0;
			}
	}
	return (grid);
}
