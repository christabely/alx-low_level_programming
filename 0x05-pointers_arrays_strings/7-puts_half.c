#include "main.h"
/**
 * puts_half - print half of string
 * @str: string variable
 * Return: 0
 */
void puts_half(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
		l++;
	if (l % 2 == 0)
		l /= 2;
	else
		l = l / 2 + 1;
	while (*(str + l) != '\0')
	{
		_putchar(*(str + l));
		l++;
	}
	_putchar('\n');
}
