#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates passwds
 * Return: void
 */
int main(void)
{
	int r = 0, u = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while (u < 2772)
	{
		r = rand() % 128;
		if ((u + r) > 2772)
			break;
		u = u + r;
		printf("%u", r);
	}
	printf("%u\n", (2772 - u));
	return (0);
}
