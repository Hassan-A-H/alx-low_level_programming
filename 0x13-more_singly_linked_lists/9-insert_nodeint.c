#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t list.
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added
 * @n: The data for the new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	if (idx > listint_len(*head))
		return (NULL);
	current = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	while (current->next)
	{
		if (idx == (count + 1))
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	new->next = NULL;
	current->next = new;
	return (new);
}

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
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
