#include "main.h"
#include <stddef.h> 
/**
 * _strchr - Returns pointer to string
 * @s:string source
 * @c:character source
 * Return: to @c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
