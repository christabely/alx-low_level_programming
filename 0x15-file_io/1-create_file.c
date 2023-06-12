#include "main.h"
/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: fie content
 * Return: 1, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fl, letn, wr;

	if (!filename)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letn = 0; text_content[letn]; letn++)
		;

	wr = write(fl, text_content, letn);

	if (wr == -1)
		return (-1);
	close(fl);
	return (1);
}
