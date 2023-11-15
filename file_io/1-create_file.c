#include "main"
/**
 * create_file - creates a file with specific content
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *(file can not be created, file can not be written, write fails, etc.)
 *The created file has those permissions: rw-------.
 *If the file already exists, do not change the permissions.
 *If the file already exists, truncate it.
 *If filename is NULL return -1.
 *If text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_count = write(fd, text_content, length);
		if (write_count == -1 || write_count != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
