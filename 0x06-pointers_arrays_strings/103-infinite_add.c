#include "main.h"
#include <stdio.h>
/**
 * infinite_add - addition of integers
 * @n1: int one
 * @n2: int two
 * @r: stores input
 * @size_r: storage size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int v1 = 0, v2 = 0, st, xy, zr1, zr2, add = 0;

	while (*(n1 + v1) != '\0')
		v1++;
	while (*(n2 + v2) != '\0')
		v2++;
	if (v1 >= v2)
		xy = v1;
	else
		xy = v2;
	if (size_r <= xy + 1)
		return (0);
	r[xy + 1] = '\0';
	v1--, v2--, size_r--;
	zr1 = *(n1 + v1) - 48, zr2 = *(n2 + v2) - 48;
	while (xy >= 0)
	{
		st = zr1 + zr2 + add;
		if (st >= 10)
			add = st / 10;
		else
			add = 0;
		if (st > 0)
		*(r + xy) = (st % 10) + 48;
		else
			*(r + xy) = '0';
		if (v1 > 0)
			v1--, zr1 = *(n1 + v1) - 48;
		else
			zr1 = 0;
		if (v2 > 0)
			v2--, zr2 = *(n2 + v2) - 48;
		else
			zr2 = 0;
		xy--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
