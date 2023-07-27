#include "main.h"

/**
 * add - Adds two integers.
 * @a: first integer.
 * @b: second integer
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: result of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: result of the multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: result of the division, or 0 if b is zero.
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
 * mod - Computes modulo of integers.
 * @a: first integer.
 * @b: second integer.
 * Return: result of modulo, or 0 if b is zero.
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
