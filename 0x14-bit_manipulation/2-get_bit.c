#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit
 * @n: number to evaluate
 * @index: index starting from 0
 * Return: Value of bit at index, or -1 if it's error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	omar = n >> index;

	return (omar & 1);
}
