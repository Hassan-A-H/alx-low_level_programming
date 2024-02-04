#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 *          where index is the index of the node, starting from 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = head;

	while (cur)
	{
		if (index == i)
			return (cur);
		cur = cur->next;
		i++;
	}
	return (NULL);
}
