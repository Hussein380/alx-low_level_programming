#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 *  read_textfile - reads a text of file and prints its output in stdout
 *  @filename: name of the file
 *  @letters: letter in the file
 *  Return: returns number of characters the file contain
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytesRead, bytesWrite;
	char *buffer;

	/*check if file name == NULL */
	if (filename == NULL)
		return (0);
	/*open the file for reading*/
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		perror("Error in opening the file\n");
		return (0);
	}

	buffer = malloc(letters + 1);
	/*read upto 'letters ' characters from file into buffer*/
	bytesRead = read(file_descriptor, buffer, letters);
	if (bytesRead == -1)
	{
		perror("Error in reading the file into the buffe\n");
		close(file_descriptor);
		return (0);
	}
	/* close the file */
	close(file_descriptor);

	/*print content of the buffer to the standart output*/
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWrite != bytesRead)
	{
		perror("Error in writing to STDOUT\n");
		return (0);
	}
	return (bytesRead);
}
