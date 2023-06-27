#include"main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\0')
		a++;
	c = a;

	for (b = c - 1; b >= 0; b--)
		putchar(s[a]);

	putchar ('\n');
}
