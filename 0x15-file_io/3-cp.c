#include "main.h"

/**
 * check_num_of_argc - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check_num_of_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_read - checks that file_from exists and can be read
 * @argv: array of pointers to the arguments.
 * @fd: file descriptor of file_from
 *
 * Return: void
 */

void check_read(int fd, char **argv)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * check_write - checks that file_to was created and/or can be written to
 * @argv: array of pointers to the arguments.
 * @fd: file descriptor of file_to
 *
 * Return: void
 */
void check_write(int fd, char **argv)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * check_close_fd - checks that file descriptors were closed properly.
 * @fd: file descriptor
 *
 * Return: void
 */
void check_close_fd(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, r = 1024, w, c_from, c_to;
	char buf[1024];

	check_num_of_argc(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_read(fd_from, argv);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_write(fd_to, argv);
	while (r == 1024)
	{
		r = read(fd_from, buf, 1024);
		check_read(r, argv);
		w = write(fd_to, buf, r);
		check_write(w, argv);
	}
	c_from = close(fd_from);
	c_to = close(fd_to);
	check_close_fd(c_from);
	check_close_fd(c_to);

	return (0);
}
