#include "main.h"
/**
 * _strcpy - copies string
 * @dest: string destination
 * @src: source of string input
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; *(src + j) != '\0'; j++)
	{
		dest[j] = *(src + j);
	}
	dest[j] = '\0';
	return (dest);
}
