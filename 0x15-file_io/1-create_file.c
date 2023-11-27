#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include "main.h"
#include <sys/types.h>
#include <unistd.h>
/**
 *  create_file - function that creates a file
 *  @filename: name of the file
 *  @text_content: contnent in the file
 *  Return: 1 when success
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWrite;
	int file_descriptor;

	/*check for NULL in filename*/
	if (filename == NULL)
		return (0);
	/*open or creatre file*/
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	/*write the text_content if not NULL*/
	if (text_content != NULL)
	{
		bytesWrite = write(file_descriptor, text_content, strlen(text_content));
		if (bytesWrite == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);

	return (1);
}
