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
	while (cur && cur->next)
	{
		if (idx == 0)
		{
			new->next = cur;
			new->prev = NULL;
			if (cur)
				cur->prev = new;
			*h = new;
			return (new);
		}
		else if (idx == i)
		{
			new->next = cur;
			new->prev = cur->prev;
			cur->prev->next = new;
			cur->prev = new;
			return (new);
		}
		cur = cur->next;
		i++;
	}
	i++;
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
		cur->next = new;
		new->next = NULL;
		new->prev = cur;
		return (new);
	}
	return (NULL);
}
