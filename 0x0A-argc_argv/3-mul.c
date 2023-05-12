#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs multiplication
 * @argc: holds arguments
 * @argv: pointer
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
