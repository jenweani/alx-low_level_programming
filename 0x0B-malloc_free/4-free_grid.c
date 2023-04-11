/*
 * File: 4-free_grid.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *             previously created by your alloc_grid function
 * @grid: memory to free
 * @height: size of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[(height - 1) - i]);
	free(grid);
}
