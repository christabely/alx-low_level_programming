#include "main.h"
/**
 * _strchr - locates char in a string
 * @s: string pointer
 * @c: character to find
 * Return: to string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
