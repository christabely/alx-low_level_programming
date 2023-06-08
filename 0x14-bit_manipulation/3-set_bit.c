#include "main.h"
/**
 * set_bit - sets bit value
 * @n: pointer
 * @index: bit index
 * Return: 1 else, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);
	return (1);
}
