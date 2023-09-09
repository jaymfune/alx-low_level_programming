#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist, or the user lacks
 * write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	/* If the filename is NULL, return -1 to indicate failure. */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of text_content. */
		for (len = 0; text_content[len];)
			len++;
	}

	/* Open the file for writing and appending. */
	o = open(filename, O_WRONLY | O_APPEND);

	/* Write the text_content to the file. */
	w = write(o, text_content, len);

	/* If either the file opening or writing fails, return -1. */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
