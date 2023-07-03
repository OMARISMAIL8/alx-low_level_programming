#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int omar, ismail;

	for (omar = 0; omar < 8; omar++)
	{
		for (ismail = 0; ismail < 8; ismail++)
		{
			_putchar(a[omar][ismail]);
		}
		_putchar('\n');
	}
}
