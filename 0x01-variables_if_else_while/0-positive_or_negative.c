#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print number if positive, negative or zero
 * Return: Always (Success)
 *
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	printf(else if n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);

}
