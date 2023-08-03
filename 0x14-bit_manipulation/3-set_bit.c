#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number passed
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if it's error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int omar;

	if (index > 64)
		return (-1);

	for (omar = 1; index > 0; index--, omar *= 2)
		;
	*n += p;

	return (1);
}
