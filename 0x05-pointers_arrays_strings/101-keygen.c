#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates passwds
 * Return: void
 */
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
	pass = (rand() % 128);
	sum += pass;
	printf("%u", pass);
	}
	printf("%u", 2772 - sum);

	return (0);
}
