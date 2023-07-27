#include "main.h"
/**
 * _strcpy - copies string
 * @dest: pointer to character
 * @src: pointer to character
 * Return: pointer to @dest
*/

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c];)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
