#include "main.h"
/**
 * print_number - prints integers
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int z, u, c;

	if (n < 0)
	{
		_putchar(45);
		z = n * -1;
	}
	else
	{
		z = n;
	}
	u = z;
	c = 1;
	while (u > 9)
	{
		u /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((z / c) % 10) + 48);
	}
}
