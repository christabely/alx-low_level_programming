#include <stdlib.h>
#include <stdio.h>
/**
 * main - print arguments
 * @argc: holds arguments passed
 * @argv: pointer
 * Return: void
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
