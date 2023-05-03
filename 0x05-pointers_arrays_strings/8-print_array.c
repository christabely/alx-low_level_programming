#include <stdio.h>
/**
 * print_array - prints array
 * @a: array of integers
 * @n: elements of array to display
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		if (j == n - 1)
			printf("%d", *(a + j));
		else
			printf("%d, ", *(a + j));
		j++;
	}
	printf("\n");
}
