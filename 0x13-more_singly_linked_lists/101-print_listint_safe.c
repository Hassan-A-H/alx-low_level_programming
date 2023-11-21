#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	if (!has_loop(head))
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
		return (count);
	}

	while (1)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("[%p] %d\n", (void *)slow, slow->next->n);
			printf("-> [%p] %d\n", (void *)slow, slow->next-> \
			       next->n);
			exit(98);
		}
	}


	return count;
}


int has_loop(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
