#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t w;
	ssize_t r;
	char *buf = NULL;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, letters);
	if (w < letters)
		return (0);
	free(buf);
	close(fd);

	return (r);
}
