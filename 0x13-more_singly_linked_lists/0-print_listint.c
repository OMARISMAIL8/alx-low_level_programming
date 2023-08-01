#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t omar = 0;

	while (h)
	{
		printf("%d\n", h->n);
		omar++;
		h = h->next;
	}

	return (omar);
}
