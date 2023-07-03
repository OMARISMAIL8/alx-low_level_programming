#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int q, b;

	for (q = 0; q < 8; q++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[q][b]);
		}
		_putchar('\n');
	}
}
