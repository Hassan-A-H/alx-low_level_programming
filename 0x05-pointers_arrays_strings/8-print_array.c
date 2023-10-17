#include "main.h"


/**
 * print_array -  prints n elements of an array of integers.
 * @a: A pointer to the first element in the array.
 * @n: the number of the elements in the array.
 *
 * Description: Iterates through the array and prints each element in it
 * followed by ',' , space and and prints new line at the end.
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
