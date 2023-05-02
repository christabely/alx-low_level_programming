#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: string parameter
 * Return: 0
 */
void _puts(char *str)
{
	int u = 0;

	while (*(str + u) != '\0')
	{
		_putchar(*(str + u));
		u++;
	}
	_putchar('\n');
}
