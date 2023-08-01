#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *omar;

	if (head == NULL)
		return;

	while (*head)
	{
		omar = (*head)->next;
		free(*head);
		*head = omar;
	}

	*head = NULL;
}
