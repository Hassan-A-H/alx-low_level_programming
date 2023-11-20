#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count;

	count = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);
}
