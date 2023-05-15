#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer
 * @width: array width
 * @height: array height
 * Return: to pointer
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, k;

	if (width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			g[i][k] = 0;

	return (g);
}
