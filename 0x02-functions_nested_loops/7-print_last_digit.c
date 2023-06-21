#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (a < 0)
		a = -1 * (a % 10);
	else
		a = a % 10;
	_putchar(a);
	return (a);
}
