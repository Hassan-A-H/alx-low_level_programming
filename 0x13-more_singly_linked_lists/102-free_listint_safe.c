#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *fast = *h;
	listint_t *slow = *h;
	listint_t *temp;
	size_t sum = 0;
	int flag = 0;

	if (*h == NULL)
		return (0);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		slow = *h;
		if (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		fast->next = NULL;
	}
	while (*h)
	{
		temp = *h;
		*h = temp->next;
		free(temp);
		sum++;
	}
	return (sum);
}
