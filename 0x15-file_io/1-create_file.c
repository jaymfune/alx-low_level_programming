#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	/* Check if the input filename pointer is NULL. */
	if (filename == NULL)
		return (-1);

	/* Check if the input text_content pointer is not NULL. */
	if (text_content != NULL)
	{
		/**
		  * Calculate the length of the text_content string
		  * by iterating until a null-terminator is found.
		  */
		for (len = 0; text_content[len];)
			len++;
	}

	/**
	  * Create a file with the specified filename, 
	  * open it for both reading and writing, and 
	  * truncate it if it already exists. Set its 
	  * permissions to 0600 (read and write for the owner).
	  */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	/* Check if either the file descriptor or the write operation failed. */
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
