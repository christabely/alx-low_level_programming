#include "main.h"
/**
 * _memset - fills memory with byte
 * @s: source
 * @b: constant byte
 * @n: bytes number
 * Return: return value of s
 * */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
