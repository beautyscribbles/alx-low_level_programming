#include "mAin.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid that will be fred
 * @height: height of grid to be fred
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return (0);
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
