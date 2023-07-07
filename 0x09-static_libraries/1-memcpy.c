#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int omar;

	for (omar = 0; omar < n; omar++)
	{
		dest[omar] = src[omar];
	}

	return (dest);
}
