#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int u, max, half;

	char first, last;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	max = u - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
