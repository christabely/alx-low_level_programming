#include "main.h"
/**
 * get_bit - returns index
 * @n: unsigned integer
 * @index: bit index
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}
	return (-1);
}
