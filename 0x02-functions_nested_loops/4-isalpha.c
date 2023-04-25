#include"main.h"
/**
 * _isalpha - checks for a lette
 * @c: accept input from other function
 * Return: 1 is c is true otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}

