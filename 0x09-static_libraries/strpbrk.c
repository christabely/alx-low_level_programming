#include "main.h"
/**
 * _strpbrk - finds first occurrance
 * @s: string for search
 * @accept: location of searched string
 * Return: to @s else NULL if no pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
