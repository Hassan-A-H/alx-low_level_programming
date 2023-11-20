#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int n;

	if (*head == NULL)
		return (0);

	*head = curr->next;
	n = curr->n;
	free(curr);
	return (n);
}
