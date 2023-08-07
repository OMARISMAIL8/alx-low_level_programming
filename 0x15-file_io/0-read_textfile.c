#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print.
 * @filename: text file being read
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or fiasdasdlename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *omar;
	ssize_t ismail;
	ssize_t o;
	ssize_t i;

	ismail = open(filename, O_RDONLY);
	if (ismail == -1)
		return (0);
	omar = malloc(sizeof(char) * letters);
	i = read(ismail, omar, letters);
	o = write(STDOUT_FILENO, omar, i);

	free(omar);
	close(ismail);
	return (o);
}
