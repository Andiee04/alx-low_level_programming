#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name for file
 * @text_content: text to put into file
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t length, inlen;
	char *ptr;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	for (inlen = 0, ptr = text_content; *ptr; ptr++)
		inlen++;
	length = write(f, text_content, inlen);

	if (close(f) == -1 || inlen != length)
		return (-1);
	return (length);
}
