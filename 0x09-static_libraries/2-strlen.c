#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: para0meter input of string
 * Return: length of a given string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
