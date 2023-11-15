#include "search_algos.h"
/**
 * linear_search - searches for value in an array of integers
 * @array: pointer
 * @size: number of elements
 * @value: value
 * Return: 1st index or -1 on NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
