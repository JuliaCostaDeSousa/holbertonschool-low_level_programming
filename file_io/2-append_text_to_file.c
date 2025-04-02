#include "main.h"

/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
int _strlen(char *s)
{
	int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:
 * @text_content:
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, bytesWrite = 0;
	int len_content = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		len_content = _strlen(text_content);
		bytesWrite = write(fd, text_content, len_content);
		if (bytesWrite == -1)
		return (-1);
	}
	close(fd);
	return (1);
}
