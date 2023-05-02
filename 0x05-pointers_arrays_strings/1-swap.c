#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer arg 1
 * @b: pointer arg 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
