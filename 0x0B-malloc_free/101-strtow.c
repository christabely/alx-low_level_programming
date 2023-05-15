#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - array
 * @grid: array of char
 * @height: height
 * Return: void
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - string
 * @str: string
 * Return: pointer array
 */
char **strtow(char *str)
{
	char **guot;
	unsigned int c, height, i, k, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	guot = malloc((height + 1) * sizeof(char *));
	if (guot == NULL || height == 0)
	{
		free(guot);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				guot[i] = malloc((c - a1 + 2) * sizeof(char));
				if (guot[i] == NULL)
				{
					ch_free_grid(guot, i);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; a1 <= c; a1++, k++)
			guot[i][k] = str[a1];
		guot[i][k] = '\0';
	}
	guot[i] = NULL;
	return (guot);
}
