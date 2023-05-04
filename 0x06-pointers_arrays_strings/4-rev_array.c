#include "main.h"
/**
 * reverse_array - reverses int content
 * @a: array
 * @n: elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp, z;

	if (n % 2 == 0)
		z = n;
	else
		z = n - 1;
	for (i = 0; i < z / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
