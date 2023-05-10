#include "main.h"
/**
 * _sqrt_recursion - return square root
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - heck wether or not it is a natural square root
 * @n: integer
 * @j: integer
 * Return: integer
 */
int _sqrt(int n, int j)
{
	if (n < 0)
		return (-1);
	if ((j * j) > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_sqrt(n, j + 1));
}
