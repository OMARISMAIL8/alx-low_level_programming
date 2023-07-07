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
	int omar;

	if (argc == 3)
	{
		omar = atoi(argv[1]) * atoi(argv[2])
		printf("%d\n", omar);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
