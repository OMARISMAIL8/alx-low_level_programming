#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number
 * @b: char string
 * Return: converted decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int omar, ismail;
	int o;

	if (b == NULL)
		return (0);

	for (o = 0; b[o]; o++)
	{
		if (b[o] != '0' && b[o] != '1')
			return (0);
	}

	for (ismail = 1, omar = 0, o--; o >= 0; o--, ismail *= 2)
	{
		if (b[o] == '1')
			omar += ismail;
	}

	return (omar);
}
