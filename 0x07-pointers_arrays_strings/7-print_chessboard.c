#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int o, i;

	for (o = 0; o < 8; o++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[o][i]);
		}
		_putchar('\n');
	}
}
