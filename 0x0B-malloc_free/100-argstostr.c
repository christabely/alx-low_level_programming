#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates functions
 * @ac: array 1
 * @av: array 2
 * Return: to pointer
 */
char *argstostr(int ac, char **av)
{
	char *stl;
	int c, i, k, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (k = 0; av[i][k] != '\0'; k++)
			c++;
		c++;
	}

	stl = malloc((c + 1) * sizeof(char));

	if (stl == NULL)
	{
		free(stl);
		return (NULL);
	}

	for (i = k = ia = 0; ia < c; k++, ia++)
	{
		if (av[i][k] == '\0')
		{
			stl[ia] = '\n';
			i++;
			ia++;
			k = 0;
		}
		if (ia < c - 1)
			stl[ia] = av[i][k];
	}
	stl[ia] = '\0';

	return (stl);
}
