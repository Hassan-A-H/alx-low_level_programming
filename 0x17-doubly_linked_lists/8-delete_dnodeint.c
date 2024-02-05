#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int i = 0;

	if (head == NULL || cur == NULL)
		return (-1);
	if (index == 0)
	{
		*head = cur->next;
		if (cur->next)
			cur->next->prev = NULL;
		free(cur);
		return (1);
	}

	while (cur && i < index)
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
		return (-1);
	cur->prev->next = cur->next;
	if (cur->next)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
