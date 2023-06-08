#include "main.h"
/**
 * clear_bit - sets value of bit
 * @n: pointer
 * @index: bit index
 * Return: 1 else, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;
	return (1);
}
