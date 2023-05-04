#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print content of size
 * @b: buffer pointed
 * @size: size
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int r, s, t;

	if (size <= 0)
		printf("\n");
	else
	{
		for (r = 0; r < size; r += 10)
		{
			printf("%.8x:", r);
			for (s = r; s < r + 10; s++)
			{
				if (s % 2 == 0)
					printf(" ");
				if (s < size)
					printf("%.2x", *(b + s));
				else
					printf("  ");
			}
			printf(" ");
			for (t = r; t < r + 10; t++)
			{
				if (t >= size)
					break;
				if (*(b + t) < 32 || *(b + t) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + t));
			}
			printf("\n");
		}
	}
}
