#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 else 1
 */
int get_endianness(void)
{
	unsigned int y;
	char *u;

	y = 1;
	u = (char *) &y;

	return ((int)*u);
}
