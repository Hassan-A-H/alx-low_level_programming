#include "lists.h"

int loop_exist(const listint_t *head);
/**
 * print_listint_safe - Prints a listint_t linked list safely, detecting loops
 * @head: Pointer to the head of the listint_t list
 *
 * Description: This function prints the elements of a listint_t linked list
 * safely, handling cases where the list may contain a loop. It uses the
 * Floyd's Cycle Detection algorithm to detect loops in the list. If a loop
 * is detected, it prints all the nodes in the list up to the node where
 * the loop starts, followed by the node at which the loop starts. If no loop
 * is detected, it prints all the elements of the list. It also prints the
 * memory addresses of the nodes along with their integer values.
 *
 * Return: Number of nodes in the list (excluding nodes in the loop)
 */
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
				while (slow != fast)
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
/**
 * loop_exist - Checks if a loop exists in a linked list
 * @head: Pointer to the head of the listint_t list
 *
 * Description: This function checks if a loop exists in a linked list
 * using Floyd's Cycle Detection algorithm. It iterates through the list
 * using two pointers, a slow pointer and a fast pointer. The slow pointer
 * moves one node at a time while the fast pointer moves two nodes at a time.
 * If the two pointers meet at some node during traversal, it indicates the
 * presence of a loop in the list. The function returns 1 if a loop is found,
 * otherwise returns 0.
 *
 * Return: 1 if a loop exists, 0 otherwise
 */
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
