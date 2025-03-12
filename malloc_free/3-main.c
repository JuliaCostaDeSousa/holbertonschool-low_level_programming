#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;
    int col = 1;
    int row = 5;

    grid = alloc_grid(col, row);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, col, row);
    printf("\n");
    grid[1][0] = 98;
    grid[4][0] = 402;
    print_grid(grid, col, row);
    return (0);
}
