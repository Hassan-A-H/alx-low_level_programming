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


/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *new = NULL;
	size_t len;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	len = listint_len(curr);
	if (idx > len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (curr != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = curr;
			*head = new;
		}
		if (idx == len - 1)
		{
			new->next = NULL;
			curr->next = new;
		}
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
		}
		curr = curr->next;
		i++;
	}
	return (new);
}
