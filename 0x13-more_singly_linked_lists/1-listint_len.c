#include "lists.h"

/**
 *listint_len - Returns the number of elements
 *in a linked listint_t list
 *@h: A pointer to the head of the list
 *
 *
 *Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count;

	count = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}
