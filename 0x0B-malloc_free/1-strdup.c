#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to memory
 * @str: string source
 * Return: to @str
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, k;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		s[k] = str[k];

	return (s);
}
