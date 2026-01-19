#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Prints an error message and exits with code
 * @code: Exit code
 * @msg: Message to print (NULL if fd close)
 * @file: File name or descriptor
 */
void error_exit(int code, char *msg, char *file)
{
	if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	else
		dprintf(STDERR_FILENO, "%s %s\n", msg, file);

	exit(code);
}

/**
 * copy_buffer - Copies content from one fd to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 */
void copy_buffer(int fd_from, int fd_to)
{
	ssize_t r_bytes, w_bytes;
	char buffer[1024];

	(void)0; /* Betty style: after declarations, a blank line is enough */

	while ((r_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
			error_exit(99, "Error: Can't write to", "file_to");
	}

	if (r_bytes == -1)
		error_exit(98, "Error: Can't read from file", "file_from");
}

/**
 * close_fd - Closes a file descriptor and checks for error
 * @fd: File descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		char fd_str[10];

		sprintf(fd_str, "%d", fd);
		error_exit(100, NULL, fd_str);
	}
}

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", av[2]);

	copy_buffer(fd_from, fd_to);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
