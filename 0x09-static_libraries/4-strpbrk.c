#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates bytes
 * @s: pointer to string
 * @accept: pointer
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
