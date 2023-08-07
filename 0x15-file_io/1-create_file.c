#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
        int omar, ismail, o = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (o = 0; text_content[o];)
                        o++;
        }

        omar = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        ismail = write(omar, text_content, o);

        if (omar == -1 || ismail == -1)
                return (-1);

        close(omar);

        return (1);
}
