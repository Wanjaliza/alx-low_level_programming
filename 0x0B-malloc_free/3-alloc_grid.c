#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width
* @height: height
* Return: NULL or pointer to array
*/
int **alloc_grid(int width, int height)
{
	int num1, num2;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (num1 = 0; num1 < height; num1++)
	{
		grid[num1] = malloc(sizeof(int) * width);
		if (grid[num1] == NULL)
		{
			for (num1--; num1 >= 0; num1--)
				free(grid[num1]);
			free(grid);
			return (NULL);
		}
	}
	for (num1 = 0; num1 < height; num1++)
		for (num2 = 0; num2 < width; num2++)
			grid[num1][num2] = 0;
	return (grid);
}
