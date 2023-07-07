#include <stdio.h>
#include <stdlib>

/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]) * atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
