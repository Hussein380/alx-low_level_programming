#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 if success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n ");
		exit(97);
	}
	/*open the source file for reading*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*open the destination file for writing, truncate if it already exists*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	/*copy the content of file_from to file_to*/
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
