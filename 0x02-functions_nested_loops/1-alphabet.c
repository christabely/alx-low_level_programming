#include"main.h"
/**
 * print_alphabet - lowercase alphabets
 * Description: "print from a-z"
 * Return: 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
