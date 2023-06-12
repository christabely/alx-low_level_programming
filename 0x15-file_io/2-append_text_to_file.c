#include "main.h"
/**
 * append_text_to_file - appends txt
 * @filename: filename
 * @text_content: adds to content
 * Return: 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, letn, wr;

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);
	if (text_content)
	{

	for (letn = 0; text_content[letn]; letn++)
		;

		wr = write(fl, text_content, letn);

		if (wr == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
