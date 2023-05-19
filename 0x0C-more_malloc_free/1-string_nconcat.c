#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: first string
 * @s2: second strng
 * @n: number of bytes
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		m = 0;
	else
	{
		for (m = 0; s2[m]; m++)
			;
	}
	if (m > n)
		m = n;
	s = malloc(sizeof(char) * (i + m + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < m; k++)
		s[k + i] = s2[k];
	s[i + m] = '\0';
	return (s);
}
