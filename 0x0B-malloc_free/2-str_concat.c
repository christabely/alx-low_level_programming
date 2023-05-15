#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: to pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, b, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s = malloc(sizeof(char) * (i + b + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	l = b;
	for (b = 0; b <= l; k++, b++)
		s[k] = s2[b];

	return (s);
}
