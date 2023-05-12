#include "main.h"
/**
 * _isupper - checks for uppercases
 * @c: tested character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
