include"main.h"
/**
 *_strcpy- copies string
 *@dest:checked
 *@src: checked
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		i++;
	}
	return (dest);
}
