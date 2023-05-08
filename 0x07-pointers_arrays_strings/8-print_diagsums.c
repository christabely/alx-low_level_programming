#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagsums
 * @a: array
 * @size: size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int j, len1 = 0, len2 = 0;

	for (j = 0; j < size; j++)
	{
		len1 += *(a + (size * j + j));
		len2 += *(a + (size * j + size - 1 - j));
	}
	printf("%d, ", len1);
	printf("%d\n", len2);
}
