#include "main.h"

/**
 * _memset - flls the memory with constant byte
 * @s: pointer to the string
 * @b: byte to alter
 * @n: index
 * Return: to string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
