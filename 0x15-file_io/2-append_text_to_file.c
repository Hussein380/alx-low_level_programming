#include "main.h"
#include <sys/types.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *  append_text_to_file - function that appens text at the end of a file
 *  @filename: name of fthe file that we willadd text at the end
 *  @text_content: content that we will be adding at the end
 *  Return: return 1 when successfull or -1 when fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytesWrite;
	int file_descriptor;

	/*check if filename is NULL*/
	if (filename == NULL)
		return (-1);
	/* checks if file_content is null*/
	if (text_content == NULL)
		return (1);

	/*open the file in append mode*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/* write text_content to the file*/
	bytesWrite = write(file_descriptor, text_content, strlen(text_content));
	if (bytesWrite == -1)
	{

		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);

	return (1);
}
