#include "main.h"
/**
 * _strcmp - compares double strings
 * @s1: string one
 * @s2: string two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, vf = 0;

	while (vf == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		vf = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (vf);
}
