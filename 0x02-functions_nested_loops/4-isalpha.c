#include"main.h"
/**
 * _isalpha - print if the input is a letter, else return 0
 *
 * @c: accept input in ASCII code
 *
 * Return: 1 for letters, otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	putchar('\n');
}

