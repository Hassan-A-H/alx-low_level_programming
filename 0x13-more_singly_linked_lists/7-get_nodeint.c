#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of a linked list
*@head: pointer to the head of the list
*@index: index of the node required
*
*Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (curr != NULL)
	{
		if (count == index)
			return (curr);
		curr = curr->next;
		count++;
	}
	return (NULL);
}
