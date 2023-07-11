#include"main.h"
#include<stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **o;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	o = malloc(sizeof(int *) * height);

	if (o == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		o[x] = malloc(sizeof(int) * width);
		if (o[x] == NULL)
		{
			while (x >= 0)
			{
				free(o);
				x++;
				return (0);
			}
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			o[x][y] = 0;
		}
	}
}
