#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	while (cur)
	{
		sum = sum + cur->n;
		cur = cur->next;
	}
	return (sum);
}
