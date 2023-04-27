#include "main.h"
#include <stdio.h>

/**
 * _isupper - "check if c is uppercase"
 *
 * @c: input for letters
 *
 * Return: 1 if c is uppercase, return 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
