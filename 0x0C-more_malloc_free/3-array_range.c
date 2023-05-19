#include "main.h"
/**
 * array_range - array of integers
 * @min: array of minimum
 * @max: array of maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, s = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = s++;
	return (arr);
}
