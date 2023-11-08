#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to integer to be checked.
 * @size: array size.
 * @cmp: function to be used to compare values.
 * Return: index of integer on success or -1 if fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 || array != NULL || cmp != NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}


	return (-1);
}
