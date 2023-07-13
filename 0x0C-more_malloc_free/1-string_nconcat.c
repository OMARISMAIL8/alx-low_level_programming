#include"main.h"
#include<stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *o;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		o = malloc(sizeof(char) * (len1 + i + 1));
	else
		o = malloc(sizeof(char) * (len1 + len2 + 1));
	if (o == 0)
		return (0);
	while (i < len1)
	{
		o[i] = s1[i];
	}
	while (n < len2 && i < (len1 + n))
		o[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		o[i++] = s2[j++];

	o[i] = '\0';

	return (o);
}
