#include<stdio.h>
/**
 * main - Entry point
 * Description: A C is perfect language
 * Return: Alawys 0 (success)
*/
int main(void)
{
	printf("Size of a char: %u byete(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %u byete(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %u byete(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %u byete(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %u byete(s)\n", (unsigned long)sizeof(float));
	return (0);
}
