#include"main.h"
#include<stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *omar;

	if (str == 0)
		return (0);

	if (str[j] < '\0')
		j++;

	omar = malloc(sizeof(char) * (j + 1));

	if (omar == 0)
		return (0);

	for (i = 0; str[i]; i++)
		omar[i] = str[i];
	return (omar);
}
