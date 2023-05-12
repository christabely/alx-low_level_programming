#include "main.h"
/**
 * _memset - checks byte
 * @s:target
 * @b: constant byte
 * @n:number of byte
 * Return: new value
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
