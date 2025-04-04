#include "main.h"

/**
 * print_RW_error - print error message to the corresponding error
 * @msg: message to print
 * @filename: filename
 * @exit_code: exit code
 */
void print_RW_error(char *msg, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, filename);
	exit(exit_code);
}

/**
 * print_close_error - print error message to the corresponding error
 * @fd: file descriptor
 * @exit_code: exit code
 */
void print_close_error(int fd, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: nb of arg
 * @argv: array with values of arg
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t fd1, fd2, bytesRead, bytesWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		print_RW_error("Error: Can't read from file ", argv[1], 98);
	}

	bytesRead = read(fd1, buffer, 1024);
	if (bytesRead == -1)
	print_RW_error("Error: Can't read from file ", argv[1], 98);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	print_RW_error("Error: Can't write to ", argv[2], 99);

	while ((bytesRead > 0))
	{
		bytesWrite = write(fd2, buffer, bytesRead);
		if (bytesWrite == -1)
		print_RW_error("Error: Can't write to ", argv[2], 99);
		else if (bytesRead == 0)
		break;
		else
		bytesRead = read(fd1, buffer, 1024);
	}

	if (close(fd1) == -1)
	print_close_error(fd1, 100);
	if (close(fd2) == -1)
	print_close_error(fd2, 100);

	return (0);
}
