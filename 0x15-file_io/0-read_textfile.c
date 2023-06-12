#include "main.h"
/**
 * read_textfile - reads and prints
 * @filename: file
 * @letters: n letters printed
 * Return: to @letters, else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t rd, wr;
	char *bf;

	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);
	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);
	rd = read(fl, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);
	close(fl);

	free(bf);
	return (wr);
}
