#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to decimal number
 * @index: index position
 * Return: 1 if it worked, -1 if it's error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int omar;
	unsigned int ismail;

	if (index > 64)
		return (-1);
	ismail = index;
	for (omar = 1; ismail > 0; omar *= 2, ismail--)
		;

	if ((*n >> index) & 1)
		*n -= omar;

	return (1);
}
