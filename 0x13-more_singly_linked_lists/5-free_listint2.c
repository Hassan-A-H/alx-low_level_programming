#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp;

	if (head != NULL)
	{
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
