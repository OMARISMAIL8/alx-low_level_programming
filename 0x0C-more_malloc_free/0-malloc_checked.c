#include"main.h"
#include<stdlib>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *omar;

	omar = malloc(b);

	if (omar == NULL)
		exit(98);
	return (omar);
}
