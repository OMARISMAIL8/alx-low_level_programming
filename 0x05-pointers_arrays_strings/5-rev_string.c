#include"main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	int a, b;
	char ch;

	a = 0;

	while (s[a] != '\0')
		++a
	for (b = 0; b < a / 2; ++b)
	{
		ch = s[b];
		s[i] = s[a - 1 - b];
		s[a - 1 - b] = ch;
	}
}
