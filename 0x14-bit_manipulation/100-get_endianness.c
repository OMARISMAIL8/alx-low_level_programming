#include "main.h"

/**
 * get_endianness - checking
 * Return: 0 if big end, or 1 if little end
 */
int get_endianness(void)
{
	int omar;

	omar = 1;
	if (*(char *)&omar == 1)
		return (1);
	else
		return (0);
}
