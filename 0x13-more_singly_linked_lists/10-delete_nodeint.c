#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL || index >= listint_len(*head))
		return (-1);
	while (curr != NULL)
	{
		if (index == i)
		{
			if (i == 0)
				*head = curr->next;
			else
				prev->next = curr->next;
			free(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
