#include"main.h"
/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		if (a % 2 == 0)
			putchar(str[a]);
	putchar('\n');
}
