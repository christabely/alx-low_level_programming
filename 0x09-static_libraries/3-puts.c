#include "main.h"
/**
 * _puts - prints string
 * @str: string pointer
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
