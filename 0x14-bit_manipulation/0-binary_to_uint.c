#include "main.h"
/**
 * binary_to_uint - converts to integer
 * @b: string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int l, base2;

	if (!b)
		return (0);
	a = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base2 = 1; l >= 0; l--, base2 *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		if (b[l] & 1)
		{
			a += base2;
		}
	}
	return (a);
}
