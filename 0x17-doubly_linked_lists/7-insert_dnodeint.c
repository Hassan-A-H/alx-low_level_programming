#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = cur;
		if (cur)
			cur->prev = new;
		*h = new;
		return (new);
	}
	while (cur && i < idx - 1)
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
		return (NULL);
	new->next = cur->next;
	if (cur->next)
		cur->next->prev = new;
	cur->next = new;
	new->prev = cur;

	return (new);
}
