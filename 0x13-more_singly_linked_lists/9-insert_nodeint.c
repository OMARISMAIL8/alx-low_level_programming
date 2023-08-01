#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first
 * @idx: index where the new node is added
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int o;
	listint_t *s;
	listint_t *i = *head;

	s = malloc(sizeof(listint_t));
	if (!s || !head)
		return (NULL);

	s->n = n;
	s->next = NULL;

	if (idx == 0)
	{
		s->next = *head;
		*head = s;
		return (s);
	}

	for (o = 0; i && o < idx; o++)
	{
		if (o == idx - 1)
		{
			s->next = i->next;
			i->next = s;
			return (s);
		}
		else
			i = i->next;
	}

	return (NULL);
}
