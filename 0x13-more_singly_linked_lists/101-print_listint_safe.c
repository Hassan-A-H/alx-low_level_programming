#include "lists.h"

int loop_exist(const listint_t *head);

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t sum = 0, count1 = 1, count2 = 0, i = 0;

	if (loop_exist(head))
	{
		while (slow && fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				fast = fast->next;
				while(slow != fast)
				{
					count1++;
					fast = fast->next;
				}
				slow = head;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
					count2++;
				}
				sum = count1 + count2;
				break;
			}
		}
		slow = head;
		while (i < sum)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	else
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			sum++;
		}
	}
	return (sum);
}

int loop_exist(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
