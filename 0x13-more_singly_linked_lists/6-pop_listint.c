#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *omar;
	int ismail;

	if (!head || !*head)
		return (0);

	ismail = (*head)->n;
	omar = (*head)->next;
	free(*head);
	*head = omar;

	return (num);
}
