#include "main.h"

/**
 * print_alphabet_x10 - Check Main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
	{
		int h, j;

		for (h = 0; h < 10; h++)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
		_putchar('\n');
		}
	}
