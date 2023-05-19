#include "main.h"
/**
 * _realloc -  reallocates memory block
 * @ptr: pointer to value
 * @old_size: initial size
 * @new_size: new size
 * Return: @ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c, *relloc;
	unsigned int j;

	if (ptr != NULL)
	c = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (j = 0; j < (old_size || j < new_size); j++)
	{
		*(relloc + j) = c[j];
	}
	free(ptr);
return (relloc);
}
