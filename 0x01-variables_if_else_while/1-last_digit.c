#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of a number
 * Return: Always 0
 */

int main(void)

{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
	printf("Last digit of %d and is 0", n, ld);
	}
        else 
	{
	iprintf("Last digit of %d is %d and less than 6 and not 0", n, ld);
	}	
	Return (0);
}
