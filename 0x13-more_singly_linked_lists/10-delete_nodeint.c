#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *omar = *head;
	listint_t *current = 0;
	unsigned int i = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(omar);
		return (1);
	}

	while (i < index - 1)
	{
		if (!omar || !(omar->next))
			return (-1);
		omar = omar->next;
		i++;
	}


	current = omar->next;
	omar->next = current->next;
	free(current);

	return (1);
}
