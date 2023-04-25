#include"main.h"

/**
 * _abs - compute value of an integer
 * @n: input integer
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
