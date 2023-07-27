#include "main.h"
/**
 * _strlen - print length of string
 * @s: pointer for string input
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
