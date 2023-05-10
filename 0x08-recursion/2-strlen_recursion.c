#include "main.h"
/**
 * _strlen_recursion - lenght
 * @s: string source
 * Return: string source
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
