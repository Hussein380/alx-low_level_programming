#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * error_exit - function to exit when error
 * @code: code to exit with
 * @message: pointer to message to exit with
 * @arg: argument
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
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
		error_exit(97, "usage: %s file_from file_to\n ", argv[0]);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[2]);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n",
				close(file_from) == -1 ? argv[1] : argv[2]);
	}
	return (0);
}
