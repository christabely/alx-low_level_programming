#include "main.h"
/**
 * _puts - print a sring to stdout
 * @str: string parameter
 * Return: 0
 */
void _puts(char *str)
{
	int lenght = 0;

	while (*(str + lenght) != '\0')
	{
		_putchar(*(str + lenght));
		len++;
	}
	_putchar('\n');
}
