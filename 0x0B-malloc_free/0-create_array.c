#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 * @size: size of array
 * @c: char storage
 * Return: to array
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(c) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		j[i] = c;

	return (j);
}
