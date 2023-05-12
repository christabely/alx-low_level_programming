#include "main.h"
/**
 * _strcat - concatenates double strings
 * @dest: pointer to destination
 * @src: source input
 * Return: to dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, u = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}
	while (u >= 0)
	{
		*(dest + c) = *(src + u);
		if (*(src + u) == '\0')
			break;
		c++;
		u++;
	}
	return (dest);
}
