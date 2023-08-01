#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t omar = 0;

	while (h)
	{
		omar++;
		h = h->next;
	}

	return (omar);
}
