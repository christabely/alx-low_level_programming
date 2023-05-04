#include "main.h"
/**
 * leet - encodes string
 * @c: string pointer
 * Return: to c
 */
char *leet(char *c)
{
	int i = 0, z;

	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	leet[] = {'4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		z = 0;

		while (z < 5)
		{
			if (c[i] == a[z] || c[i] == b[z])
				c[i] = leet[z];
			z++;

		}
		i++;
	}
	return (c);
}
