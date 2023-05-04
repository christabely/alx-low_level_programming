#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src: source
 * @n: number of bytes from source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, z = 0;

	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + z) == '\0' || z == n))
	{
		*(dest + i) = *(src + z);
		i++;
		z++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
