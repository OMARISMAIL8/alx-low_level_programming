#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of file
 * @text_content: The string to add
 *
 * Return: If the function fails or filename is NULL - -1
 *         If the file does not exist the user lacks write permissions - -1
 *         Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int omar, ismail, o = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (o = 0; text_content[o];)
			o++;
	}

	omar = open(filename, O_WRONLY | O_APPEND);
	ismail = write(omar, text_content, o);

	if (omar == -1 || ismail == -1)
		return (-1);

	close(omar);

	return (1);
}
