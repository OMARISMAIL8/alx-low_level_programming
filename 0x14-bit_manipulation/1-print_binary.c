#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int o;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (o = n, i = 0; (o >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
