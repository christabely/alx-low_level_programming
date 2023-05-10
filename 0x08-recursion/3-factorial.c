#include "main.h"
/**
 * factorial - returns integer
 * @n: sum for factorization
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
