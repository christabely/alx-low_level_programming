#include "main.h"
int tmp_prime(int n, int i);
/**
 * divisors - check for prime numbers
 * @n: integer
 * @j: integer
 * Return: integer
 */
int divisors(int n, int j)
{
	if (j % n == 0)
	{
		return (0);
	}
	else if (j / 2 > n)
	{
		return (divisors(n + 2, j));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - check for prime nu
 * @n: integer num
 * Return: source
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
