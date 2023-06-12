#include "main.h"
#include <stdio.h>
/**
 * error_file - checks opened files
 * @file_from: file
 * @file_to: file
 * @argv: argumens
 * Return: NULL
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: arguments
 * @argv: vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, er_cls;
	ssize_t chs, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	chs = 1024;
	while (chs == 1024)
	{
		chs = read(file_from, buf, 1024);
		if (chs == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, buf, chs);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	er_cls = close(file_from);
	if (er_cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	er_cls = close(file_to);
	if (er_cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
