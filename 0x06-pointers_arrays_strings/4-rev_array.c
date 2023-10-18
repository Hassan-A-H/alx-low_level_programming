#include "main.h"

/**
 * reverse_array - reverses the content of ana array of integers.
 * @a: A pointer to the first element in the array.
 * @n: The number of element in the array.
 *
 * Description: This function reverses the order of elements in the given
 * integer array 'a'. It swaps elements from the beginning and end of
 * the array until the entire array is reversed.
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
