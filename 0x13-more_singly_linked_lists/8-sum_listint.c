#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *omar = head;

	while (omar)
	{
		sum += omar->n;
		temp = omar->next;
	}

	return (sum);
}
