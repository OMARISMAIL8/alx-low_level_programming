#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it wrong
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *o;
	listint_t *i = *head;

	o = malloc(sizeof(listint_t));
	if (!o)
		return (NULL);

	o->n = n;
	o->next = NULL;

	if (*head == NULL)
	{
		*head = o;
		return (o);
	}

	while (i->next)
		i = i->next;

	i->next = o;

	return (o);
}
