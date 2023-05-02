#include"main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: 0
*/
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
