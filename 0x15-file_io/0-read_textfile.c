#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters (characters) to be read.
 * Return: The actual number of bytes read and printed to STDOUT.
 *        0 when the function fails or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf; /* A pointer to a char buffer for storing read data. */
	ssize_t fd; /* A file descriptor for the opened file. */
	ssize_t w; /* The number of bytes written to STDOUT. */
	ssize_t t; /* The number of bytes read from the file. */

	/* Attempt to open the specified file for reading (O_RDONLY). */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for a buffer to store the read data. */
	buf = malloc(sizeof(char) * letters);

	/* Read up to 'letters' number of characters from the file into 'buf'. */
	t = read(fd, buf, letters);

	/* Write the read data from 'buf' to the standard output (STDOUT). */
	w = write(STDOUT_FILENO, buf, t);

	/* Free the allocated memory for the buffer. */
	free(buf);

	/* Close the file descriptor. */
	close(fd);

	return (w);
}
