#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0;
	ssize_t bytesRead = 0, bytesWrite = 0;

	char *data;

	if (filename == NULL || letters == 0)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	data = malloc(letters + 1);
	if (data == NULL)
	return (0);

	bytesRead = read(fd, data, letters);
	if (bytesRead == -1)
	return (0);
	data[bytesRead] = '\0';

	bytesWrite = write(STDOUT_FILENO, data, bytesRead);
	if (bytesWrite == -1)
	return (0);

	close(fd);
	free(data);
	return (bytesRead);
}
