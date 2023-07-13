#include"main.h"
#include<stdlib.h>

/**
 *_calloc- function allocates memory for an array of nmemb
 *@nmemb: array
 *@size: size of the array
 *Return: array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *omar;

	char *o;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	omar = malloc(size * nmemb);
	if (omar == 0)
		return (0);
	o = omar;

	for (i = 0; i < (size * nmemb); i++)
	{
		o[i] = '\0';
	}
	return (omar);
}
