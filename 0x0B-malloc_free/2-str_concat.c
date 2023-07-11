#include"main.h"
#include<stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *o;
	int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	o = malloc(sizeof(char) * (i + j + 1));

	if (o == 0)
		return (0);

	i = j = 0;
	while (s1[i] != '\0')
	{
		o[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		o[i] = s2[j];
		i++;
		j++;
	}
	o[i] = '\0';
	return (o);
}
