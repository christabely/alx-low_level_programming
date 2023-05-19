#include "main.h"
/**
 * main - performs multiplication
 * @argc: array
 * @argv: args
 * Return: integet
 */
int main(int argc, char *argv[])
{
unsigned long m;
int i, k;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] > 57 || argv[i][k] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	m = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", m);
return (0);
}
