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
	while (cur)
	{
		if (idx == 0)
		{
			new->next = cur;
			new->prev = cur->prev;
			cur->prev = new;
			*h = new;
			return (new);
		}
		if (idx == i)
		{
			new->next = cur;
			new->prev = cur->prev;
			cur->prev->next = new;
			cur->prev = new;
			return (new);
		}
		if (idx == (i + 1))
		{
			new->next = cur->next;
			new->prev = cur;
			cur->next = new;
			return (new);
		}
		cur = cur->next;
		i++;
	}
	cur = *h;
	if (cur == NULL && idx == 0)
	{
		new->next = cur;
		new->prev = cur;
		*h = new;
		return (new);
	}
	return (NULL);
}
