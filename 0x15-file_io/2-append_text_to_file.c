#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: is the name of the file to create
 * @text_content: string to wrtie to the file
 * Return: 1 on success, -1 on failur
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
	}
	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}

